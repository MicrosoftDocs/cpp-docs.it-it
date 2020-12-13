---
description: 'Altre informazioni su: macro di conversione di stringhe'
title: Macro di conversione di stringhe
ms.date: 11/04/2016
f1_keywords:
- atlconv/ATL::DEVMODEA2W
- atlconv/ATL::TEXTMETRICA2W
- atlconv/ATL::DEVMODEOLE2T
- atlconv/ATL::TEXTMETRICOLE2T
- atlconv/ATL::DEVMODET2OLE
- atlconv/ATL::TEXTMETRICT2OLE
- atlconv/ATL::DEVMODEW2A
- atlconv/ATL::TEXTMETRICW2A
ms.assetid: 2ff7c0b6-2bde-45fe-897f-6128e18e0c27
ms.openlocfilehash: a7717f7876d9dbe23c0b95fd68b4bcd971e81267
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97138775"
---
# <a name="string-conversion-macros"></a>Macro di conversione di stringhe

Queste macro forniscono funzionalità di conversione di stringhe.

## <a name="atl-and-mfc-string-conversion-macros"></a><a name="atl_and_mfc_string_conversion_macros"></a> Macro di conversione di stringhe ATL e MFC

Le macro di conversione di stringhe presentate in questo argomento sono valide sia per ATL che per MFC. Per ulteriori informazioni sulla conversione di stringhe MFC, vedere [TN059: utilizzo di macro di conversione MFC MBCS/Unicode](../../mfc/tn059-using-mfc-mbcs-unicode-conversion-macros.md) e [macro e globali MFC](../../mfc/reference/mfc-macros-and-globals.md).

## <a name="devmode-and-textmetric-string-conversion-macros"></a><a name="devmode_and_textmetric_string_conversion_macros"></a> Macro di conversione di stringhe DEVMODE e TEXTMETRIC

Queste macro creano una copia di una struttura [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) o [TEXTMETRIC](/windows/win32/api/wingdi/ns-wingdi-textmetricw) e convertono le stringhe all'interno della nuova struttura in un nuovo tipo di stringa. Le macro allocano memoria nello stack per la nuova struttura e restituiscono un puntatore alla nuova struttura.

```cpp
MACRONAME( address_of_structure )
```

### <a name="remarks"></a>Commenti

Ad esempio:

[!code-cpp[NVC_ATL_Utilities#128](../../atl/codesnippet/cpp/string-conversion-macros_1.cpp)]

e:

[!code-cpp[NVC_ATL_Utilities#129](../../atl/codesnippet/cpp/string-conversion-macros_2.cpp)]

Nei nomi delle macro, il tipo di stringa nella struttura di origine si trova a sinistra (ad esempio, **a**) e il tipo di stringa nella struttura di destinazione è a destra (ad esempio, **W**). **Un** sta per LPSTR, **OLE** sta per LPOLESTR, **T** sta per LPTSTR e **W** sta per LPWSTR.

Quindi, DEVMODEA2W copia una `DEVMODE` struttura con stringhe LPSTR in una `DEVMODE` struttura con stringhe LPWSTR, TEXTMETRICOLE2T copia una `TEXTMETRIC` struttura con stringhe LPOLESTR in una `TEXTMETRIC` struttura con stringhe LPTSTR e così via.

Le due stringhe convertite nella `DEVMODE` struttura sono il nome del dispositivo ( `dmDeviceName` ) e il nome del form ( `dmFormName` ). Le `DEVMODE` macro di conversione di stringhe aggiornano anche le dimensioni della struttura ( `dmSize` ).

Le quattro stringhe convertite nella `TEXTMETRIC` struttura sono il primo carattere ( `tmFirstChar` ), l'ultimo carattere ( `tmLastChar` ), il carattere predefinito ( `tmDefaultChar` ) e il carattere di rottura ( `tmBreakChar` ).

Il comportamento delle `DEVMODE` macro di `TEXTMETRIC` conversione di stringhe e dipende dalla direttiva del compilatore, se disponibile. Se i tipi di origine e di destinazione sono uguali, la conversione non viene eseguita. Le direttive del compilatore cambiano **T** e **OLE** come indicato di seguito:

|Direttiva del compilatore attiva|T diventa|OLE diventa|
|----------------------------------|---------------|-----------------|
|Nessuno|**A**|**W**|
|**\_UNICODE**|**W**|**W**|
|**OLE2ANSI**|**A**|**A**|
|**\_ Unicode** e **OLE2ANSI**|**W**|**A**|

Nella tabella seguente sono elencate `DEVMODE` le `TEXTMETRIC` macro di conversione di stringhe e.

|`DEVMODE` macro|`TEXTMETRIC` macro|
|-|-|
|DEVMODEA2W|TEXTMETRICA2W|
|DEVMODEOLE2T|TEXTMETRICOLE2T|
|DEVMODET2OLE|TEXTMETRICT2OLE|
|DEVMODEW2A|TEXTMETRICW2A|

## <a name="see-also"></a>Vedi anche

[Macro](../../atl/reference/atl-macros.md)
