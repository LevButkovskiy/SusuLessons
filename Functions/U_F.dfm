object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 142
  ClientWidth = 275
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
  object Label3: TLabel
    Left = 62
    Top = 8
    Width = 117
    Height = 13
    Alignment = taCenter
    Caption = ' '#1044#1088#1091#1075#1080#1077' '#1079#1085#1072#1095#1077#1085#1080#1103
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Verdana'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label1: TLabel
    Left = 16
    Top = 40
    Width = 20
    Height = 13
    Caption = 'X = '
  end
  object Label2: TLabel
    Left = 16
    Top = 64
    Width = 20
    Height = 13
    Caption = 'Y = '
  end
  object OutZ: TLabel
    Left = 152
    Top = 104
    Width = 24
    Height = 13
    Caption = 'OutZ'
  end
  object newInX: TEdit
    Left = 42
    Top = 37
    Width = 79
    Height = 21
    TabOrder = 0
    Text = 'newInX'
  end
  object newInY: TEdit
    Left = 42
    Top = 61
    Width = 79
    Height = 21
    TabOrder = 1
    Text = 'Edit1'
  end
  object But1_F: TButton
    Left = 42
    Top = 99
    Width = 75
    Height = 25
    Caption = #1056#1072#1089#1089#1095#1077#1090' F'
    TabOrder = 2
    OnClick = But1_FClick
  end
  object But2_nfClick: TButton
    Left = 136
    Top = 40
    Width = 121
    Height = 25
    Caption = 'F '#1076#1083#1103' '#1076#1088#1091#1075#1080#1093' X '#1080' Y'
    TabOrder = 3
  end
end
