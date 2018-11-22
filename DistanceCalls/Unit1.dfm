object Form1: TForm1
  Left = 361
  Top = 0
  Caption = #1056#1072#1089#1089#1095#1077#1090' '#1089#1090#1086#1080#1084#1086#1089#1090#1080' '#1079#1074#1086#1085#1082#1072
  ClientHeight = 235
  ClientWidth = 461
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object LabelOutAbonent: TLabel
    Left = 71
    Top = 8
    Width = 114
    Height = 13
    Caption = #1042#1099#1079#1099#1074#1072#1102#1097#1080#1081' '#1072#1073#1086#1085#1077#1085#1090
  end
  object LabelIncomingAbonent: TLabel
    Left = 289
    Top = 8
    Width = 110
    Height = 13
    Caption = #1042#1099#1079#1099#1074#1072#1077#1084#1099#1081' '#1072#1073#1086#1085#1077#1085#1090
  end
  object LabelCallTime: TLabel
    Left = 139
    Top = 58
    Width = 159
    Height = 13
    Caption = #1055#1083#1072#1085#1080#1088#1091#1077#1084#1086#1077' '#1074#1088#1077#1084#1103' '#1088#1072#1079#1075#1086#1074#1086#1088#1072':'
  end
  object LabelMinutes: TLabel
    Left = 354
    Top = 58
    Width = 22
    Height = 13
    Caption = #1084#1080#1085'.'
  end
  object LabelDistanceBetweenCities: TLabel
    Left = 146
    Top = 152
    Width = 152
    Height = 13
    Caption = ' '#1056#1072#1089#1089#1090#1086#1103#1085#1080#1077' '#1084#1077#1078#1076#1091' '#1075#1086#1088#1086#1076#1072#1084#1080':'
    Visible = False
  end
  object LabelKilometrs: TLabel
    Left = 354
    Top = 152
    Width = 12
    Height = 13
    Caption = #1082#1084
    Visible = False
  end
  object LabelCost: TLabel
    Left = 8
    Top = 104
    Width = 58
    Height = 13
    Caption = #1057#1090#1086#1080#1084#1086#1089#1090#1100':'
  end
  object Cost: TLabel
    Left = 72
    Top = 104
    Width = 6
    Height = 13
    Caption = '0'
  end
  object LabelPrice: TLabel
    Left = 36
    Top = 85
    Width = 30
    Height = 13
    Caption = #1062#1077#1085#1072':'
  end
  object Price: TLabel
    Left = 72
    Top = 85
    Width = 6
    Height = 13
    Caption = '0'
  end
  object Label1: TLabel
    Left = 36
    Top = 190
    Width = 412
    Height = 13
    Caption = 
      '*'#1045#1089#1083#1080' '#1084#1077#1078#1076#1091' '#1075#1086#1088#1086#1076#1072#1084#1080' '#1088#1072#1089#1089#1090#1086#1103#1085#1080#1077' '#1084#1077#1085#1100#1096#1077' 5000 '#1080' '#1079#1074#1086#1085#1086#1082' '#1076#1083#1080#1090#1089#1103' '#1084#1077#1085#1077 +
      #1077' 60 '#1084#1080#1085#1091#1090
    Visible = False
  end
  object Label2: TLabel
    Left = 146
    Top = 209
    Width = 177
    Height = 13
    Caption = #1057#1058#1054#1048#1052#1054#1057#1058#1068' '#1056#1040#1047#1043#1054#1042#1054#1056#1040' 0 '#1056#1059#1041#1051#1045#1049
  end
  object Label3: TLabel
    Left = 106
    Top = 175
    Width = 256
    Height = 13
    Caption = #1055#1088#1080' '#1086#1076#1080#1085#1072#1082#1086#1074#1099#1093' '#1086#1087#1077#1088#1072#1090#1086#1088#1072#1093' '#1079#1074#1086#1085#1086#1082' '#1073#1077#1089#1087#1083#1072#1090#1085#1099#1081'*'
  end
  object Error1: TLabel
    Left = 183
    Top = 27
    Width = 102
    Height = 13
    Caption = #1059#1082#1072#1078#1080#1090#1077' '#1086#1087#1077#1088#1072#1090#1086#1088#1072
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    Visible = False
  end
  object Error2: TLabel
    Left = 21
    Top = 123
    Width = 45
    Height = 13
    Caption = #1057#1082#1080#1076#1082#1072': '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clFuchsia
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    Visible = False
  end
  object Label4: TLabel
    Left = 146
    Top = 190
    Width = 187
    Height = 13
    Caption = '*'#1045#1089#1083#1080' '#1079#1074#1086#1085#1086#1082' '#1076#1083#1080#1090#1089#1103' '#1084#1077#1085#1077#1077' 60 '#1084#1080#1085#1091#1090
  end
  object skidkaValue: TLabel
    Left = 68
    Top = 123
    Width = 11
    Height = 13
    Caption = '%'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clFuchsia
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    Visible = False
  end
  object CallTime: TEdit
    Left = 304
    Top = 54
    Width = 44
    Height = 21
    TabOrder = 0
    OnKeyPress = CallTimeKeyPress
  end
  object OperatorFrom: TComboBox
    Left = 82
    Top = 27
    Width = 95
    Height = 21
    TabOrder = 1
    Text = #1054#1087#1077#1088#1072#1090#1086#1088
    OnChange = OperatorFromChange
    OnKeyPress = OperatorFromKeyPress
    Items.Strings = (
      'Yota'
      #1052#1058#1057
      #1052#1077#1075#1072#1092#1086#1085
      #1041#1080#1083#1072#1081#1085
      #1058#1077#1083#1077'2'
      #1056#1086#1089#1090#1077#1083#1077#1082#1086#1084)
  end
  object OperatorTo: TComboBox
    Left = 304
    Top = 27
    Width = 95
    Height = 21
    TabOrder = 2
    Text = #1054#1087#1077#1088#1072#1090#1086#1088
    OnKeyPress = OperatorToKeyPress
    Items.Strings = (
      'Yota'
      #1052#1058#1057
      #1052#1077#1075#1072#1092#1086#1085
      #1041#1080#1083#1072#1081#1085
      #1058#1077#1083#1077'2'
      #1056#1086#1089#1090#1077#1083#1077#1082#1086#1084)
  end
  object DateTimePicker1: TDateTimePicker
    Left = 8
    Top = 58
    Width = 81
    Height = 21
    Date = 43412.450035428240000000
    Time = 43412.450035428240000000
    MaxDate = 69762.999988425930000000
    MinDate = 43412.000000000000000000
    TabOrder = 3
    OnKeyPress = DateTimePicker1KeyPress
  end
  object DistanceBetweenCities: TEdit
    Left = 304
    Top = 148
    Width = 44
    Height = 21
    TabOrder = 4
    Text = '0'
    Visible = False
  end
  object Button1: TButton
    Left = 208
    Top = 77
    Width = 75
    Height = 25
    Caption = #1056#1072#1089#1089#1095#1080#1090#1072#1090#1100
    TabOrder = 5
    OnClick = Button1Click
    OnKeyPress = Button1KeyPress
  end
end
