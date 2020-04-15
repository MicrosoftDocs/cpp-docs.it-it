---
title: Macro di conversione delle stringhe
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
ms.openlocfilehash: 8df496b78334d26e7d3664642b2e9d93d6149843
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325848"
---
# <a name="string-conversion-macros"></a>Macro di conversione delle stringhe

Queste macro forniscono funzionalità di conversione delle stringhe.

## <a name="atl-and-mfc-string-conversion-macros"></a><a name="atl_and_mfc_string_conversion_macros"></a>Macro di conversione di stringhe ATL e MFC

Le macro di conversione di stringhe presentate in questo argomento sono valide sia per ATL che per MFC. Per ulteriori informazioni sulla conversione delle stringhe MFC, vedere [TN059: Utilizzo delle macro di conversione MBCS/Unicode MFC](../../mfc/tn059-using-mfc-mbcs-unicode-conversion-macros.md) e [macro e globali MFC](../../mfc/reference/mfc-macros-and-globals.md).

## <a name="devmode-and-textmetric-string-conversion-macros"></a><a name="devmode_and_textmetric_string_conversion_macros"></a>DevMODE e MACRO di conversione di stringhe TEXTMETRIC

Queste macro creano una copia di una struttura [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) o [TEXTMETRIC](/windows/win32/api/wingdi/ns-wingdi-textmetricw) e convertono le stringhe all'interno della nuova struttura in un nuovo tipo di stringa. Le macro allocano memoria nello stack per la nuova struttura e restituiscono un puntatore alla nuova struttura.

```cpp
MACRONAME( address_of_structure )
```

### <a name="remarks"></a>Osservazioni

Ad esempio:

[!code-cpp[NVC_ATL_Utilities#128](../../atl/codesnippet/cpp/string-conversion-macros_1.cpp)]

e:

[!code-cpp[NVC_ATL_Utilities#129](../../atl/codesnippet/cpp/string-conversion-macros_2.cpp)]

Nei nomi delle macro, il tipo di stringa nella struttura di origine si trova a sinistra (ad esempio, **A**) e il tipo di stringa nella struttura di destinazione è a destra , ad esempio **W**. **A** sta per LPSTR, **OLE** sta per LPOLESTR, **T** sta per LPTSTR, e **W** sta per LPWSTR.

Pertanto, DEVMODEA2W `DEVMODE` copia una struttura con `DEVMODE` stringhe LPSTR in una struttura con stringhe LPWSTR, TEXTMETRICOLE2T copia una `TEXTMETRIC` struttura con stringhe LPOLESTR in una `TEXTMETRIC` struttura con stringhe LPTSTR e così via.

Le due stringhe `DEVMODE` convertite nella struttura`dmDeviceName`sono il nome`dmFormName`del dispositivo ( ) e il nome del form ( ). Le `DEVMODE` macro di conversione delle`dmSize`stringhe aggiornano anche le dimensioni della struttura ( ).

Le quattro stringhe `TEXTMETRIC` convertite nella struttura`tmFirstChar`sono il`tmLastChar`primo carattere`tmDefaultChar`( ), l'ultimo carattere ( ), il carattere predefinito ( ) e il carattere di interruzione ( ).`tmBreakChar`

Il comportamento `DEVMODE` delle `TEXTMETRIC` macro di conversione delle stringhe e dipende dalla direttiva del compilatore in vigore, se presente. Se i tipi di origine e di destinazione sono uguali, la conversione non viene eseguita. Direttive del compilatore modificare T e OLE come segue:Compiler directives change **T** and **OLE** as follows:

|Direttiva del compilatore attiva|T diventa|OLE diventa|
|----------------------------------|---------------|-----------------|
|none|**A**|**W**|
|**\_Unicode**|**W**|**W**|
|**OLE2ANSI**|**A**|**A**|
|UNICODE e **OLE2ANSI** ** \_**|**W**|**A**|

Nella tabella seguente `DEVMODE` `TEXTMETRIC` sono elencate le macro di conversione delle stringhe e .

|||
|-|-|
|DEVMODEA2W|TESTOMETRICOA2W|
|DEVMODEOLE2T|TESTOMETRICOLE2T|
|DEVMODET2OLED|TESTOMETRICT2OLE|
|DEVMODEW2A|TESTOMETRICOW2A|

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
