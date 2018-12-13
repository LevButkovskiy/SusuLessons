object priceForm: TpriceForm
  Left = 0
  Top = 0
  Caption = #1059#1089#1090#1072#1085#1086#1074#1082#1072' '#1094#1077#1085' '#1085#1072' '#1090#1088#1072#1085#1089#1087#1086#1088#1090
  ClientHeight = 177
  ClientWidth = 426
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object trolleybusLabel: TLabel
    Left = 263
    Top = 11
    Width = 22
    Height = 13
    Caption = #1088'/'#1082#1084
    Visible = False
  end
  object busLabel: TLabel
    Left = 263
    Top = 46
    Width = 25
    Height = 13
    Caption = ' '#1088'/'#1082#1084
    Visible = False
  end
  object carLabel: TLabel
    Left = 263
    Top = 81
    Width = 25
    Height = 13
    Caption = ' '#1083'/'#1082#1084
    Visible = False
  end
  object priceLabel: TLabel
    Left = 304
    Top = 81
    Width = 30
    Height = 13
    Caption = #1062#1077#1085#1072':'
    Visible = False
  end
  object priceValueLabel: TLabel
    Left = 340
    Top = 81
    Width = 6
    Height = 13
    Caption = '0'
    Visible = False
  end
  object Label1: TLabel
    Left = 160
    Top = 67
    Width = 67
    Height = 11
    Caption = #1088#1072#1089#1093#1086#1076' '#1090#1086#1087#1083#1080#1074#1072
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -9
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    Visible = False
  end
  object trolleybusLEdit: TLabeledEdit
    Left = 136
    Top = 8
    Width = 121
    Height = 21
    EditLabel.Width = 59
    EditLabel.Height = 13
    EditLabel.Caption = #1058#1088#1086#1083#1083#1077#1081#1073#1091#1089
    LabelPosition = lpLeft
    TabOrder = 0
    Text = '0'
    Visible = False
    OnKeyPress = trolleybusLEditKeyPress
  end
  object busLEdit: TLabeledEdit
    Left = 136
    Top = 40
    Width = 121
    Height = 21
    EditLabel.Width = 42
    EditLabel.Height = 13
    EditLabel.Caption = #1040#1074#1090#1086#1073#1091#1089
    LabelPosition = lpLeft
    TabOrder = 1
    Text = '0'
    Visible = False
    OnKeyPress = busLEditKeyPress
  end
  object carLEdit: TLabeledEdit
    Left = 136
    Top = 78
    Width = 121
    Height = 21
    EditLabel.Width = 119
    EditLabel.Height = 13
    EditLabel.Caption = #1051#1080#1095#1085#1099#1081' '#1072#1074#1090#1086#1090#1088#1072#1085#1089#1087#1086#1088#1090
    LabelPosition = lpLeft
    TabOrder = 2
    Text = '0'
    Visible = False
    OnKeyPress = carLEditKeyPress
  end
  object chooseFuelCheck: TCheckBox
    Left = 136
    Top = 105
    Width = 129
    Height = 17
    Caption = #1042#1099#1073#1088#1072#1090#1100' '#1090#1080#1087' '#1090#1086#1087#1083#1080#1074#1072
    TabOrder = 3
    Visible = False
    OnClick = chooseFuelCheckClick
  end
  object saveButton: TButton
    Left = 160
    Top = 144
    Width = 75
    Height = 25
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
    TabOrder = 4
    OnClick = saveButtonClick
  end
end
