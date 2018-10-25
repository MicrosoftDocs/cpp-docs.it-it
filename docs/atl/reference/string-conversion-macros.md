---
title: Macro di conversione di stringhe | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlconv/ATL::DEVMODEA2W
- atlconv/ATL::TEXTMETRICA2W
- atlconv/ATL::DEVMODEOLE2T
- atlconv/ATL::TEXTMETRICOLE2T
- atlconv/ATL::DEVMODET2OLE
- atlconv/ATL::TEXTMETRICT2OLE
- atlconv/ATL::DEVMODEW2A
- atlconv/ATL::TEXTMETRICW2A
dev_langs:
- C++
ms.assetid: 2ff7c0b6-2bde-45fe-897f-6128e18e0c27
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: aa44449c65dbdfdea93004fa2fe1adffdeba033d
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50061742"
---
# <a name="string-conversion-macros"></a>Macro di conversione di stringhe

Queste macro forniscono stringa le funzionalità di conversione.

##  <a name="atl_and_mfc_string_conversion_macros"></a>  Macro di conversione di stringhe MFC e ATL

Le macro di conversione di stringhe presentate in questo argomento sono valide sia per ATL che per MFC. Per altre informazioni sulla conversione di stringhe MFC, vedere [TN059: utilizzo delle macro conversione MFC MBCS/Unicode](../../mfc/tn059-using-mfc-mbcs-unicode-conversion-macros.md) e [macro MFC e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md).

##  <a name="devmode_and_textmetric_string_conversion_macros"></a>  Macro di conversione di stringhe TEXTMETRIC e DEVMODE

Queste macro creano una copia di un [DEVMODE](/windows/desktop/api/wingdi/ns-wingdi-_devicemodea) oppure [TEXTMETRIC](/windows/desktop/api/wingdi/ns-wingdi-tagtextmetrica) strutturare e convertire le stringhe all'interno della nuova struttura di un nuovo tipo di stringa. Le macro alloca memoria sullo stack per la nuova struttura e restituiscono un puntatore alla struttura di nuovo.

```cpp
MACRONAME( address_of_structure )
```

### <a name="remarks"></a>Note

Ad esempio:

[!code-cpp[NVC_ATL_Utilities#128](../../atl/codesnippet/cpp/string-conversion-macros_1.cpp)]

e:

[!code-cpp[NVC_ATL_Utilities#129](../../atl/codesnippet/cpp/string-conversion-macros_2.cpp)]

Nei nomi di macro, il tipo di stringa della struttura di origine è a sinistra (ad esempio, **oggetto**) e il tipo di stringa della struttura di destinazione è a destra (ad esempio **W**). **Oggetto** LPSTR, l'acronimo **OLE** LPOLESTR, l'acronimo **T** è l'acronimo di LPTSTR, e **W** è l'acronimo di LPWSTR.

Di conseguenza, DEVMODEA2W copia una `DEVMODE` struttura con LPSTR stringhe in un `DEVMODE` struttura con le stringhe LPWSTR, copie TEXTMETRICOLE2T una `TEXTMETRIC` struttura con LPOLESTR stringhe in un `TEXTMETRIC` struttura con le stringhe LPTSTR e così via.

Le due stringhe convertite nel `DEVMODE` struttura sono il nome del dispositivo (`dmDeviceName`) e il nome del modulo (`dmFormName`). Il `DEVMODE` macro di conversione di stringhe aggiornare anche la dimensione della struttura (`dmSize`).

Le quattro stringhe convertite nel `TEXTMETRIC` struttura sono il primo carattere (`tmFirstChar`), l'ultimo carattere (`tmLastChar`), il carattere predefinito (`tmDefaultChar`) e il carattere di interruzione (`tmBreakChar`).

Il comportamento dei `DEVMODE` e `TEXTMETRIC` macro di conversione di stringhe dipende dalla direttiva del compilatore in effetti, se presente. Se i tipi di origine e di destinazione sono uguali, la conversione non viene eseguita. Modificare le direttive del compilatore **T** e **OLE** come indicato di seguito:

|Direttiva del compilatore attiva|T diventa|OLE diventa|
|----------------------------------|---------------|-----------------|
|none|**A**|**W**|
|**\_UNICODE**|**W**|**W**|
|**OLE2ANSI**|**A**|**A**|
|**\_UNICODE** e **OLE2ANSI**|**W**|**A**|

La tabella seguente elenca i `DEVMODE` e `TEXTMETRIC` macro di conversione di stringhe.

|||
|-|-|
|DEVMODEA2W|TEXTMETRICA2W|
|DEVMODEOLE2T|TEXTMETRICOLE2T|
|DEVMODET2OLE|TEXTMETRICT2OLE|
|DEVMODEW2A|TEXTMETRICW2A|

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
