---
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
ms.openlocfilehash: 6a84424de81eba2e6ab1e1baf60f567ebf2739ee
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68915512"
---
# <a name="string-conversion-macros"></a>Macro di conversione di stringhe

Queste macro forniscono funzionalità di conversione di stringhe.

##  <a name="atl_and_mfc_string_conversion_macros"></a>Macro di conversione di stringhe ATL e MFC

Le macro di conversione di stringhe presentate in questo argomento sono valide sia per ATL che per MFC. Per ulteriori informazioni sulla conversione di stringhe MFC, [vedere TN059: Utilizzo di macro](../../mfc/tn059-using-mfc-mbcs-unicode-conversion-macros.md) di conversione MFC MBCS/Unicode e [macro e globali MFC](../../mfc/reference/mfc-macros-and-globals.md).

##  <a name="devmode_and_textmetric_string_conversion_macros"></a>Macro di conversione di stringhe DEVMODE e TEXTMETRIC

Queste macro creano una copia di una struttura [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) o [TEXTMETRIC](/windows/desktop/api/wingdi/ns-wingdi-tagtextmetrica) e convertono le stringhe all'interno della nuova struttura in un nuovo tipo di stringa. Le macro allocano memoria nello stack per la nuova struttura e restituiscono un puntatore alla nuova struttura.

```cpp
MACRONAME( address_of_structure )
```

### <a name="remarks"></a>Note

Ad esempio:

[!code-cpp[NVC_ATL_Utilities#128](../../atl/codesnippet/cpp/string-conversion-macros_1.cpp)]

e:

[!code-cpp[NVC_ATL_Utilities#129](../../atl/codesnippet/cpp/string-conversion-macros_2.cpp)]

Nei nomi delle macro, il tipo di stringa nella struttura di origine si trova a sinistra (ad esempio, **a**) e il tipo di stringa nella struttura di destinazione è a destra (ad esempio, **W**). **Un** sta per LPSTR, **OLE** sta per LPOLESTR, **T** sta per LPTSTR e **W** sta per LPWSTR.

Quindi, DEVMODEA2W copia una `DEVMODE` struttura con stringhe LPSTR in una `DEVMODE` struttura con stringhe LPWSTR, TEXTMETRICOLE2T copia una `TEXTMETRIC` struttura con stringhe LPOLESTR in una `TEXTMETRIC` struttura con stringhe LPTSTR e così via.

Le due stringhe convertite nella `DEVMODE` struttura sono il nome del dispositivo`dmDeviceName`() e il nome del`dmFormName`form (). Le `DEVMODE` macro di conversione di stringhe aggiornano anche le`dmSize`dimensioni della struttura ().

Le quattro stringhe convertite nella `TEXTMETRIC` struttura sono il primo carattere (`tmFirstChar`), l'ultimo carattere (`tmLastChar`), il carattere predefinito (`tmDefaultChar`) e il carattere di rottura (`tmBreakChar`).

Il comportamento delle macro `DEVMODE` di `TEXTMETRIC` conversione di stringhe e dipende dalla direttiva del compilatore, se disponibile. Se i tipi di origine e di destinazione sono uguali, la conversione non viene eseguita. Le direttive del compilatore cambiano **T** e **OLE** come indicato di seguito:

|Direttiva del compilatore attiva|T diventa|OLE diventa|
|----------------------------------|---------------|-----------------|
|none|**A**|**W**|
|**\_UNICODE**|**W**|**W**|
|**OLE2ANSI**|**A**|**A**|
|Unicode e **OLE2ANSI**  **\_**|**W**|**A**|

Nella tabella seguente sono elencate `DEVMODE` le `TEXTMETRIC` macro di conversione di stringhe e.

|||
|-|-|
|DEVMODEA2W|TEXTMETRICA2W|
|DEVMODEOLE2T|TEXTMETRICOLE2T|
|DEVMODET2OLE|TEXTMETRICT2OLE|
|DEVMODEW2A|TEXTMETRICW2A|

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
