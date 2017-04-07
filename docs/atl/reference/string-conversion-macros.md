---
title: Macro di conversione di stringhe | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
ms.assetid: 2ff7c0b6-2bde-45fe-897f-6128e18e0c27
caps.latest.revision: 16
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: 634e33f4989046767f17fce15377fe6f4959bd8d
ms.lasthandoff: 03/31/2017

---
# <a name="string-conversion-macros"></a>Macro di conversione di stringhe
Queste macro forniscono stringa alle funzionalità di conversione.  
  
|||  
|-|-|  
|[Macro di conversione di stringhe MFC e ATL](string-conversion-macros.md)|Set di macro di conversione tra tipi di stringa.|  
|[DEVMODE e TEXTMETRIC macro di conversione di stringhe](http://msdn.microsoft.com/library/85cebec0-2a18-48e5-9c1c-99d5b7f15425)|Set di macro che converte le stringhe all'interno di `DEVMODE` e `TEXTMETRIC` strutture.|  
  
##  <a name="atl_and_mfc_string_conversion_macros"></a>Macro di conversione di stringhe MFC e ATL  
 Le macro di conversione di stringhe presentate in questo argomento sono valide sia per ATL che per MFC. Per ulteriori informazioni sulla conversione di stringhe MFC, vedere [TN059: utilizzo delle macro conversione MFC MBCS/Unicode](../../mfc/tn059-using-mfc-mbcs-unicode-conversion-macros.md) e [macro MFC e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md).  
  
##  <a name="devmode_and_textmetric_string_conversion_macros"></a>DEVMODE e TEXTMETRIC macro di conversione di stringhe  
 Queste macro creano una copia di un [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) o [TEXTMETRIC](http://msdn.microsoft.com/library/windows/desktop/dd145132) struttura e convertire le stringhe all'interno della nuova struttura di un nuovo tipo di stringa. Le macro di allocare memoria nello stack per la nuova struttura e restituiscono un puntatore alla struttura di nuovo.  
  
```
MACRONAME( address_of_structure )
```  
  
### <a name="remarks"></a>Note  
 Ad esempio:  
  
 [!code-cpp[&#128; NVC_ATL_Utilities](../../atl/codesnippet/cpp/string-conversion-macros_1.cpp)]  
  
 e:  
  
 [!code-cpp[NVC_ATL_Utilities #129](../../atl/codesnippet/cpp/string-conversion-macros_2.cpp)]  
  
 Nei nomi delle macro, il tipo di stringa nella struttura di origine è a sinistra (ad esempio, **A**) e il tipo di stringa nella struttura di destinazione è a destra (ad esempio, **W**). **A** stands for **LPSTR**, **OLE** stands for `LPOLESTR`, **T** stands for `LPTSTR`, and **W** stands for `LPWSTR`.  
  
 Di conseguenza, `DEVMODEA2W` copie un `DEVMODE` struttura **LPSTR** stringhe in un `DEVMODE` struttura `LPWSTR` stringhe, `TEXTMETRICOLE2T` copie un `TEXTMETRIC` struttura con `LPOLESTR` stringhe in un `TEXTMETRIC` struttura `LPTSTR` stringhe e così via.  
  
 Le due stringhe convertite nel `DEVMODE` struttura sono il nome del dispositivo ( **dmDeviceName**) e il nome del modulo ( **dmFormName**). Il `DEVMODE` macro di conversione di stringhe aggiornare anche le dimensioni della struttura ( **dmSize**).  
  
 Le quattro stringhe convertite nel `TEXTMETRIC` struttura sono il primo carattere ( **tmFirstChar**), l'ultimo carattere ( **tmLastChar**), il carattere predefinito ( **tmDefaultChar**) e il carattere di interruzione ( **tmBreakChar**).  
  
 Il comportamento del `DEVMODE` e `TEXTMETRIC` macro di conversione di stringhe dipende la direttiva del compilatore attiva, se presente. Se i tipi di origine e di destinazione sono uguali, la conversione non viene eseguita. Modificare le direttive del compilatore **T** e **OLE** come indicato di seguito:  
  
|Direttiva del compilatore attiva|T diventa|OLE diventa|  
|----------------------------------|---------------|-----------------|  
|nessuno|**A**|**W**|  
|**UNICODE**|**W**|**W**|  
|**OLE2ANSI**|**A**|**A**|  
|**Unicode** e **OLE2ANSI**|**W**|**A**|  
  
 La tabella seguente elenca i `DEVMODE` e `TEXTMETRIC` macro di conversione di stringhe.  
  
### <a name="devmode-and-textmetric-string-conversion-macros"></a>DEVMODE e TEXTMETRIC macro di conversione di stringhe  
  
|||  
|-|-|  
|`DEVMODEA2W`|`TEXTMETRICA2W`|  
|`DEVMODEOLE2T`|`TEXTMETRICOLE2T`|  
|`DEVMODET2OLE`|`TEXTMETRICT2OLE`|  
|`DEVMODEW2A`|`TEXTMETRICW2A`|  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)


