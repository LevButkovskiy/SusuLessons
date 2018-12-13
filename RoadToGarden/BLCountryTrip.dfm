object countryTripForm: TcountryTripForm
  Left = 0
  Top = 0
  Caption = #1055#1086#1077#1079#1076#1082#1072' '#1085#1072' '#1076#1072#1095#1091
  ClientHeight = 176
  ClientWidth = 375
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = menu
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object distanceLabel: TLabel
    Left = 8
    Top = 144
    Width = 82
    Height = 13
    Caption = #1056#1072#1089#1089#1090#1086#1103#1085#1080#1077' '#1074' '#1082#1084
  end
  object costLabel: TLabel
    Left = 270
    Top = 120
    Width = 3
    Height = 13
  end
  object transportGroup: TRadioGroup
    Left = 8
    Top = 8
    Width = 209
    Height = 113
    Caption = #1058#1088#1072#1085#1089#1087#1086#1088#1090
    Items.Strings = (
      #1058#1088#1086#1083#1083#1077#1081#1073#1091#1089
      #1040#1074#1090#1086#1073#1091#1089
      #1051#1080#1095#1085#1099#1081' '#1072#1074#1090#1086#1084#1086#1073#1080#1083#1100)
    TabOrder = 0
    OnClick = transportGroupClick
  end
  object CheckBox1: TCheckBox
    Left = 270
    Top = 24
    Width = 97
    Height = 17
    Caption = #1058#1091#1076#1072' '#1080' '#1086#1073#1088#1072#1090#1085#1086
    TabOrder = 1
  end
  object distanceEdit: TEdit
    Left = 96
    Top = 141
    Width = 121
    Height = 21
    TabOrder = 2
    OnKeyPress = distanceEditKeyPress
  end
  object costButton: TButton
    Left = 263
    Top = 139
    Width = 75
    Height = 25
    Caption = #1057#1090#1086#1080#1084#1086#1089#1090#1100
    TabOrder = 3
    OnClick = costButtonClick
  end
  object menu: TMainMenu
    Left = 224
    Top = 16
    object N1: TMenuItem
      Caption = #1059#1089#1090#1072#1085#1086#1074#1080#1090#1100' '#1094#1077#1085#1091
      OnClick = N1Click
    end
  end
end
