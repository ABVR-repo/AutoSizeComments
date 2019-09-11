// Copyright 2018 fpwong, Inc. All Rights Reserved.

#include "AutoSizeCommentsSettings.h"

UAutoSizeCommentsSettings::UAutoSizeCommentsSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	CommentNodePadding = FVector2D(30, 30);
	DefaultFontSize = 18;
	bUseDefaultFontSize = false;
	bUseRandomColor = true;
	DefaultCommentColor = FLinearColor::White;
	HeaderStyle.Color = FLinearColor::Gray;
	bAggressivelyUseDefaultColor = false;
	bMoveEmptyCommentBoxes = true;
	EmptyCommentBoxSpeed = 10;
	bGlobalColorBubble = false;
	bGlobalShowBubbleWhenZoomed = true;
	bSaveCommentNodeDataToFile = true;
	bHideHeaderButton = false;
	bHideCommentBoxControls = false;
	bHidePresets = false;
	bHideRandomizeButton = false;
	bHideCommentBubble = false;
}