object errorForm: TerrorForm
  Left = 0
  Top = 0
  Caption = #1054#1064#1048#1041#1050#1040
  ClientHeight = 87
  ClientWidth = 269
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object error1Label: TLabel
    Left = 48
    Top = 16
    Width = 167
    Height = 19
    Caption = #1042#1099#1073#1077#1088#1080#1090#1077' '#1090#1080#1087' '#1090#1086#1087#1083#1080#1074#1072
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object OKButton: TButton
    Left = 96
    Top = 48
    Width = 75
    Height = 25
    Caption = 'OK'
    TabOrder = 0
    OnClick = OKButtonClick
  end
end
