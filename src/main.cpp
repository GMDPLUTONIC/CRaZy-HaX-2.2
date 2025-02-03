#include "includes.h"

using namespace geode::prelude;

class $modify(MenuLayer){
    bool init() {
        if (!MenuLayer::init()) return false;

        if (!Mod::get()->setSavedValue("seen-intro", true)) {
            FLAlertLayer* popup = FLAlertLayer::create(
                "Singularity Menu",
                "Welcome to <cr>Singularity Menu</c>. <cb>Press F5 Or The Button On Your Screen In Order To Open Singularity Menu</c>.",
                "Close"
            );
            popup->m_scene = this;
            popup->show();
        }
	}
};

void setup() {

	ImGui::StyleColorsClassic();

	// Styling

    ImGui::PushStyleVar(ImGuiStyleVar_Alpha, 0.95);
    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(7.5f, 8.0f));
    ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 5.0);
	ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(2.5f, 2.0f));
	ImGui::PushStyleVar(ImGuiStyleVar_WindowTitleAlign, ImVec2(0.5f, 1.0f));

	ImGui::PushStyleColor(ImGuiCol_TitleBgActive, (ImVec4(0.09803921729326248f, 0.09803921729326248f, 0.09803921729326248f, 1.0f)));
	ImGui::PushStyleColor(ImGuiCol_TitleBg, (ImVec4(0.09803921729326248f, 0.09803921729326248f, 0.09803921729326248f, 1.0f)));
	ImGui::PushStyleColor(ImGuiCol_FrameBgActive, (ImVec4(0.7686274647712708f, 0.5764706134796143f, 0.5764706134796143f, 0.5490196347236633f)));
	ImGui::PushStyleColor(ImGuiCol_Button, (ImVec4(0.7686274647712708f, 0.5764706134796143f, 0.5764706134796143f, 0.5490196347236633f)));
	ImGui::PushStyleColor(ImGuiCol_ButtonHovered, (ImVec4(0.886274516582489f, 0.6941176652908325f, 0.6941176652908325f, 0.5490196347236633f)));
	ImGui::PushStyleColor(ImGuiCol_WindowBg, (ImVec4(0.09803921729326248f, 0.09803921729326248f, 0.09803921729326248f, 1.0f)));
	ImGui::PushStyleColor(ImGuiCol_PopupBg, (ImVec4(0.09803921729326248f, 0.09803921729326248f, 0.09803921729326248f, 1.0f)));
	ImGui::PushStyleColor(ImGuiCol_CheckMark, (ImVec4(0.294117659330368f, 0.294117659330368f, 0.294117659330368f, 1.0f)));
	ImGui::PushStyleColor(ImGuiCol_ScrollbarBg, (ImVec4(0.1568627506494522f, 0.1568627506494522f, 0.1568627506494522f, 0.0f)));
	ImGui::PushStyleColor(ImGuiCol_SliderGrab, (ImVec4(0.7686274647712708f, 0.5764706134796143f, 0.5764706134796143f, 0.5490196347236633f)));
	ImGui::PushStyleColor(ImGuiCol_ScrollbarGrab, (ImVec4(0.1568627506494522f, 0.1568627506494522f, 0.1568627506494522f, 1.0f)));
	ImGui::PushStyleColor(ImGuiCol_ScrollbarGrabHovered, (ImVec4(0.2352941185235977f, 0.2352941185235977f, 0.2352941185235977f, 1.0f)));
	ImGui::PushStyleColor(ImGuiCol_ScrollbarGrabActive, (ImVec4(0.294117659330368f, 0.294117659330368f, 0.294117659330368f, 1.0f)));
	ImGui::PushStyleColor(ImGuiCol_HeaderHovered, (ImVec4(0.886274516582489f, 0.6941176652908325f, 0.6941176652908325f, 0.5490196347236633f)));
	ImGui::PushStyleColor(ImGuiCol_NavWindowingHighlight, (ImVec4(1.0f, 1.0f, 1.0f, 0.699999988079071f)));
	/*
	style.Alpha = 0.99.f;
	style.WindowPadding = ImVec2(7.5f, 8.0f);
	style.WindowRounding = 10.0f;
	style.WindowBorderSize = 1.0f;
	style.WindowMinSize = ImVec2(30.0f, 30.0f);
	style.WindowTitleAlign = ImVec2(0.5f, 1.0f);
	style.WindowMenuButtonPosition = ImGuiDir_Right;
	style.ChildRounding = 5.0f;
	style.ChildBorderSize = 1.0f;
	style.PopupRounding = 10.0f;
	style.PopupBorderSize = 0.0f;
	style.FramePadding = ImVec2(20.0f, 7.5f);
	style.FrameRounding = 5.0f;
	style.FrameBorderSize = 0.0f;
	style.ItemSpacing = ImVec2(5.0f, 4.0f);
	style.ItemInnerSpacing = ImVec2(5.0f, 5.0f);
	style.CellPadding = ImVec2(4.0f, 2.0f);
	style.IndentSpacing = 20.0f;
	style.ColumnsMinSpacing = 0.0f;
	style.ScrollbarSize = 12.5f;
	style.ScrollbarRounding = 10.0f;
	style.GrabMinSize = 20.0f;
	style.GrabRounding = 5.0f;
	style.TabRounding = 5.0f;
	style.TabBorderSize = 0.0f;
	style.TabMinWidthForCloseButton = 0.0f;
	style.ColorButtonPosition = ImGuiDir_Right;
	style.ButtonTextAlign = ImVec2(0.5f, 0.5f);
	style.SelectableTextAlign = ImVec2(0.0f, 0.0f);
	
	style.Colors[ImGuiCol_Text] = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
	style.Colors[ImGuiCol_TextDisabled] = ImVec4(1.0f, 1.0f, 1.0f, 0.3605149984359741f);
	style.Colors[ImGuiCol_WindowBg] = ImVec4(0.09803921729326248f, 0.09803921729326248f, 0.09803921729326248f, 1.0f);
	style.Colors[ImGuiCol_ChildBg] = ImVec4(0.0f, 1.0f, 1.0f, 0.0f);
	style.Colors[ImGuiCol_PopupBg] = ImVec4(0.09803921729326248f, 0.09803921729326248f, 0.09803921729326248f, 1.0f);
	style.Colors[ImGuiCol_Border] = ImVec4(0.572549045085907f, 0.3803921639919281f, 0.3803921639919281f, 0.54935622215271f);
	style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
	style.Colors[ImGuiCol_FrameBg] = ImVec4(0.1568627506494522f, 0.1568627506494522f, 0.1568627506494522f, 1.0f);
	style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.572549045085907f, 0.3803921639919281f, 0.3803921639919281f, 0.5490196347236633f);
	style.Colors[ImGuiCol_FrameBgActive] = ImVec4(0.7686274647712708f, 0.5764706134796143f, 0.5764706134796143f, 0.5490196347236633f);
	style.Colors[ImGuiCol_TitleBg] = ImVec4(0.09803921729326248f, 0.09803921729326248f, 0.09803921729326248f, 1.0f);
	style.Colors[ImGuiCol_TitleBgActive] = ImVec4(0.09803921729326248f, 0.09803921729326248f, 0.09803921729326248f, 1.0f);
	style.Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.2588235437870026f, 0.2588235437870026f, 0.2588235437870026f, 0.0f);
	style.Colors[ImGuiCol_MenuBarBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
	style.Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.1568627506494522f, 0.1568627506494522f, 0.1568627506494522f, 0.0f);
	style.Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.1568627506494522f, 0.1568627506494522f, 0.1568627506494522f, 1.0f);
	style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.2352941185235977f, 0.2352941185235977f, 0.2352941185235977f, 1.0f);
	style.Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.294117659330368f, 0.294117659330368f, 0.294117659330368f, 1.0f);
	style.Colors[ImGuiCol_CheckMark] = ImVec4(0.294117659330368f, 0.294117659330368f, 0.294117659330368f, 1.0f);
	style.Colors[ImGuiCol_SliderGrab] = ImVec4(0.7686274647712708f, 0.5764706134796143f, 0.5764706134796143f, 0.5490196347236633f);
	style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.9647058844566345f, 0.772549033164978f, 0.772549033164978f, 0.5490196347236633f);
	style.Colors[ImGuiCol_Button] = ImVec4(0.7686274647712708f, 0.5764706134796143f, 0.5764706134796143f, 0.5490196347236633f);
	style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.886274516582489f, 0.6941176652908325f, 0.6941176652908325f, 0.5490196347236633f);
	style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.9647058844566345f, 0.772549033164978f, 0.772549033164978f, 0.5490196347236633f);
	style.Colors[ImGuiCol_Header] = ImVec4(0.7686274647712708f, 0.5764706134796143f, 0.5764706134796143f, 0.5490196347236633f);
	style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.886274516582489f, 0.6941176652908325f, 0.6941176652908325f, 0.5490196347236633f);
	style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.9647058844566345f, 0.772549033164978f, 0.772549033164978f, 0.5490196347236633f);
	style.Colors[ImGuiCol_Separator] = ImVec4(0.7686274647712708f, 0.5764706134796143f, 0.5764706134796143f, 0.5490196347236633f);
	style.Colors[ImGuiCol_SeparatorHovered] = ImVec4(0.886274516582489f, 0.6941176652908325f, 0.6941176652908325f, 0.5490196347236633f);
	style.Colors[ImGuiCol_SeparatorActive] = ImVec4(0.9647058844566345f, 0.772549033164978f, 0.772549033164978f, 0.4248927235603333f);
	style.Colors[ImGuiCol_ResizeGrip] = ImVec4(0.7686274647712708f, 0.5764706134796143f, 0.5764706134796143f, 0.5490196347236633f);
	style.Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.886274516582489f, 0.6941176652908325f, 0.6941176652908325f, 0.5490196347236633f);
	style.Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.9647058844566345f, 0.772549033164978f, 0.772549033164978f, 0.5490196347236633f);
	style.Colors[ImGuiCol_Tab] = ImVec4(0.7686274647712708f, 0.5764706134796143f, 0.5764706134796143f, 0.5490196347236633f);
	style.Colors[ImGuiCol_TabHovered] = ImVec4(0.886274516582489f, 0.6941176652908325f, 0.6941176652908325f, 0.5490196347236633f);
	style.Colors[ImGuiCol_TabActive] = ImVec4(0.9647058844566345f, 0.772549033164978f, 0.772549033164978f, 0.5490196347236633f);
	style.Colors[ImGuiCol_TabUnfocused] = ImVec4(1.0f, 0.0f, 0.0f, 0.0f);
	style.Colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.4235294163227081f, 0.1333333551883698f, 0.1333333551883698f, 0.0f);
	style.Colors[ImGuiCol_PlotLines] = ImVec4(0.294117659330368f, 0.294117659330368f, 0.294117659330368f, 1.0f);
	style.Colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.886274516582489f, 0.6941176652908325f, 0.6941176652908325f, 0.5490196347236633f);
	style.Colors[ImGuiCol_PlotHistogram] = ImVec4(0.7686274647712708f, 0.5764706134796143f, 0.5764706134796143f, 0.5490196347236633f);
	style.Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.886274516582489f, 0.6941176652908325f, 0.6941176652908325f, 0.5490196347236633f);
	style.Colors[ImGuiCol_TableHeaderBg] = ImVec4(0.1882352977991104f, 0.1882352977991104f, 0.2000000029802322f, 1.0f);
	style.Colors[ImGuiCol_TableBorderStrong] = ImVec4(0.4235294163227081f, 0.3803921639919281f, 0.572549045085907f, 0.5490196347236633f);
	style.Colors[ImGuiCol_TableBorderLight] = ImVec4(0.4235294163227081f, 0.3803921639919281f, 0.572549045085907f, 0.2918455004692078f);
	style.Colors[ImGuiCol_TableRowBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
	style.Colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.0f, 1.0f, 1.0f, 0.03433477878570557f);
	style.Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.7372549176216125f, 0.6941176652908325f, 0.886274516582489f, 0.5490196347236633f);
	style.Colors[ImGuiCol_DragDropTarget] = ImVec4(1.0f, 1.0f, 0.0f, 0.8999999761581421f);
	style.Colors[ImGuiCol_NavHighlight] = ImVec4(0.0f, 0.0f, 0.0f, 1.0f);
	style.Colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.0f, 1.0f, 1.0f, 0.699999988079071f);
	style.Colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.800000011920929f, 0.800000011920929f, 0.800000011920929f, 0.2000000029802322f);
	style.Colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.800000011920929f, 0.800000011920929f, 0.800000011920929f, 0.3499999940395355f);
*/
    auto& io = ImGui::GetIO();
    auto fontPath = geode::Mod::get()->getResourcesDir() / "Rubik.ttf";
    io.Fonts->AddFontFromFileTTF(fontPath.string().c_str(), 18.0f);
}

void draw() {

    ImGui::SetNextWindowPos(ImVec2(60, 55), ImGuiCond_Appearing);
    ImGui::SetNextWindowSize(ImVec2(150, 200));
    ImGui::Begin("Singularity Menu:", nullptr, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);

	if (ImGui::Button("Info", ImVec2(75.f, 50.f))) {
		FLAlertLayer::create("Singularity Menu:", "Singularity Menu Is THE Next-Generation Mod Menu Made Entirely By <cb>GMP</c>.", "Close")->show();
	}

	if (ImGui::Button("Credits", ImVec2(75.f, 50.f))) {
		FLAlertLayer::create("Credits:", "<cb>Prevter:</c> Help With Some Hacks. <cr>Geode Lead Devs:</c> Their Awesome Modding SDK.", "Close")->show();
	}

    ImGui::End();

    ImGui::SetNextWindowPos(ImVec2(210, 55), ImGuiCond_Appearing);
    ImGui::SetNextWindowSize(ImVec2(150, 125));
	ImGui::Begin("Global:", nullptr, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);

	ImGui::Text("Speedhack");
    if(ImGui::InputFloat((""), &speedhack, 1.0f, 10.0f, "%.5f")) {
	    class $modify(SpeedhackScheduler, cocos2d::CCScheduler) {
			void update(float deltatime) override {

				if (speedhack <= 0)
					speedhack = 1.f;

				deltatime *= speedhack;

				CCScheduler::update(deltatime);
			}
    	};
	}

	if(ImGui::Checkbox("No Slider Limit", &sliderLimit)) {
		if (!Mod::get()->setSavedValue("no-slider-limit", true)) {

		class $modify(NoSliderLimitLogic, SliderTouchLogic) {

			void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) override {
				auto touchPos = this->convertTouchToNodeSpace(touch);
				auto position = touchPos - this->m_position;
				if (this->m_rotated) {
					auto clamped = position.y;
					this->m_thumb->setPosition({0.f, clamped});
				} else {
					auto clamped = position.x;
					this->m_thumb->setPosition({clamped, 0.f});
				}

				if (this->m_activateThumb)
					this->m_thumb->activate();

				if (auto* slider = this->m_slider)
					slider->updateBar();
			}
		};
	} }

	ImGui::End();

	ImGui::SetNextWindowPos(ImVec2(360, 55), ImGuiCond_Appearing);
    ImGui::SetNextWindowSize(ImVec2(150, 150));
	ImGui::Begin("Cosmetic:", nullptr, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);

	if(ImGui::Checkbox("Icon Hack", &iconHack)) {
class $modify(GameManager) {
    bool isIconUnlocked(int _id, IconType _type) {
        if (!Mod::get()->setSavedValue("icon-hack", true)) {
            if (GameManager::isIconUnlocked(_id, _type)) return true;
            if (_id <= 0) return false;
            return true;
        } else {
            return GameManager::isIconUnlocked(_id, _type);
        }
    }

    bool isColorUnlocked(int _id, UnlockType _type) {
        if (!Mod::get()->setSavedValue("icon-hack", true)) {
            if (GameManager::isColorUnlocked(_id, _type)) return true;
            return true;
        } else {
            return GameManager::isColorUnlocked(_id, _type);
        }
    }
};

    class $modify(UnlockIconsGSMHook, GameStatsManager) {

        bool isItemUnlocked(UnlockType type, int key) {
            if (GameStatsManager::isItemUnlocked(type, key)) return true;
        }
    };
	}

	if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled)) {
    ImGui::SetTooltip("Lets You Use Any Icon In The Game."); }

	if(ImGui::Checkbox("Solid Wave Trail", &solidWaveTrail)) {
    class $modify(SolidWaveTrailNode, cocos2d::CCDrawNode) {
        bool drawPolygon(cocos2d::CCPoint* p0, unsigned int p1, const cocos2d::ccColor4F& p2, float p3, const cocos2d::ccColor4F& p4) {
            if (p2.r == 1.F && p2.g == 1.F && p2.b == 1.F && p2.a != 1.F) return true;

            this->setBlendFunc(cocos2d::CCSprite::create()->getBlendFunc());
            this->setZOrder(-100);
            return CCDrawNode::drawPolygon(p0, p1, p2, p3, p4);
        }
    };

	} else {
		
	}

	if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled)) {
    ImGui::SetTooltip("Gets Rid Of Blending On The Wave Trail."); }
	
	if(ImGui::Checkbox("No Shaders", &noShaders)) {
		class $modify(NoShadersLayer, ShaderLayer) {
			void performCalculations() {
				m_state.m_usesShaders = false;
			}
    	};
	} else {

	}

	if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled)) {
    ImGui::SetTooltip("Gets Rid Of Shaders In Levels."); }

	if(ImGui::Checkbox("No Glow", &noGlow)) {
		class $modify(NoGlowLayer, PlayLayer) {
			void addObject(GameObject* obj) {
				obj->m_hasNoGlow = true;
				PlayLayer::addObject(obj);
			}
    	};
	}

	if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled)) {
    ImGui::SetTooltip("Gets Rid Of Glow In Levels."); }

	ImGui::End();

	ImGui::SetNextWindowPos(ImVec2(510, 55));
	ImGui::SetNextWindowSize(ImVec2(190, 125));
	ImGui::Begin("Level:", nullptr, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);

	if(ImGui::Checkbox("Noclip", &noclip)) {
		class $modify(NoclipLayer, PlayLayer) {
			void destroyPlayer(PlayerObject* player, GameObject* object) override {
				if (object == m_anticheatSpike) {
					PlayLayer::destroyPlayer(player, object);
					return;
				}
			}
		};
	} else {
	
	}

	if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled)) {
    ImGui::SetTooltip("Makes The Player Invincible."); }

	if(ImGui::Checkbox("Auto Practice Mode", &autoPracticeMode)) {
		class $modify(AutoPracticeModeLayer, PlayLayer) {
			bool init(GJGameLevel* p0, bool p1, bool p2) {
				if (!PlayLayer::init(p0, p1, p2))
				return false;

				this->togglePracticeMode(true);
				return true;
			}
		};
	}
	
	if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled)) {
    ImGui::SetTooltip("Automatically Enables Practice Mode Whenever You Enter A Level."); }

	if(ImGui::Checkbox("Auto Song Download", &autoSongDownload)) {
		class $modify(AutoSongDownloadLayer, LevelInfoLayer) {
			void levelDownloadFinished(GJGameLevel* level) override {
				LevelInfoLayer::levelDownloadFinished(level);

				if (m_songWidget->m_downloadBtn->isVisible())
					m_songWidget->m_downloadBtn->activate();
			}
    	};
	}
	
	if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled)) {
    ImGui::SetTooltip("Automatically Downloads The Level Songs If Your Already Haven't."); }

	ImGui::End();

	ImGui::SetNextWindowPos(ImVec2(700, 55));
	ImGui::SetNextWindowSize(ImVec2(130, 125));
	ImGui::Begin("Creator:", nullptr, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);

	if(ImGui::Checkbox("Level Edit", &levelEdit)) {

    class $modify(LevelEditUI, EditorUI) {
        void onSettings(CCObject* sender) {
            auto level = this->m_editorLayer->m_level;
            auto levelType = level->m_levelType;
            level->m_levelType = GJLevelType::Editor;
            EditorUI::onSettings(sender);
            level->m_levelType = levelType;
        }
    };

    class $modify(LevelEditLayer1, EditorPauseLayer) {
        void customSetup() override {
            auto level = this->m_editorLayer->m_level;
            auto levelType = level->m_levelType;
            level->m_levelType = GJLevelType::Editor;
            EditorPauseLayer::customSetup();
            level->m_levelType = levelType;
        }
    };

    #ifdef NDEBUG
    class $modify(LevelEditLayer2, LevelTools) {

        static bool verifyLevelIntegrity(gd::string levelString, int levelID) {
            if (LevelTools::verifyLevelIntegrity(std::move(levelString), levelID))
                return true;
        }
    };
    #endif

	}
	
	if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled)) {
    ImGui::SetTooltip("Allows You To Edit Any Level Through The PauseLayer."); }

	if(ImGui::Checkbox("Verify Hack", &verifyHack)) {

		class $modify(VerifyHackLayer, EditLevelLayer) {
			bool init(GJGameLevel* gl) {
				gl->m_isVerified = true;
				return EditLevelLayer::init(gl);
			}
    	};

	}
	
	if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled)) {
    ImGui::SetTooltip("Automatically Verifies Your Levels For You."); }

	if(ImGui::Checkbox("Smooth Trail", &smoothTrail)) {
		class $modify(SmoothTrailLayer, LevelEditorLayer) {
			void postUpdate(float dt) override {
				m_trailTimer = 0.1f; // Force trail update every frame
				LevelEditorLayer::postUpdate(dt);
			}
    	};
	}

	ImGui::End();

	ImGui::SetNextWindowPos(ImVec2(830, 55));
	ImGui::SetNextWindowSize(ImVec2(100, 115));
	ImGui::Begin("Shortcuts:", nullptr, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);

	if (ImGui::Button("Settings", ImVec2(75.0f, 50.0f))) {

		OptionsLayer* layer = OptionsLayer::create();
        cocos2d::CCScene* scene = cocos2d::CCDirector::get()->getRunningScene();
        int z = scene->getHighestChildZ();
        if(z == INT_MAX) return;
        layer->setZOrder(z + 1);
        layer->showLayer(false);
        layer->removeFromParentAndCleanup(false);
        scene->addChild(layer);

	}
	
	if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled)) {
    ImGui::SetTooltip("Opens Up The Settings."); }

	ImGui::End();

}

$on_mod(Loaded) {
    ImGuiCocos::get()
        .setup(setup).draw(draw)
        .setVisible(true);
}

$execute {
    using namespace geode::prelude;
    using namespace keybinds;

    BindManager::get()->registerBindable({
        "open-singularity-menu"_spr,
        "Open Singularity Menu",
        "Opens/Closes Singularity Menu.",
        { Keybind::create(cocos2d::enumKeyCodes::KEY_F5, Modifier::None) },
        "Singularity Menu"
    });
    new EventListener([=](InvokeBindEvent* event) {
        if (event->isDown()) ImGuiCocos::get().toggle();
        return ListenerResult::Propagate;
    }, InvokeBindFilter(nullptr, "open-singularity-menu"_spr));
}