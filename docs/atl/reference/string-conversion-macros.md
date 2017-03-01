---
title: Macro di conversione della stringa | Documenti di Microsoft
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
ms.sourcegitcommit: 89790d1a56f64e6479ae32d72c529142ba8df1de
ms.openlocfilehash: 0dce243b0f7db087db908d603e6cd1cfc4b02db8
ms.lasthandoff: 02/24/2017

---
# <a name="string-conversion-macros"></a>Macro di conversione di stringhe
Queste macro forniscono stringa funzionalità di conversione.  
  
|||  
|-|-|  
|[Macro di conversione di stringhe MFC e ATL](http://msdn.microsoft.com/library/8f53659e-0464-4424-97db-6b8453c49863)|Set di macro per eseguire la conversione tra tipi di stringa.|  
|[DEVMODE e TEXTMETRIC macro di conversione di stringhe](http://msdn.microsoft.com/library/85cebec0-2a18-48e5-9c1c-99d5b7f15425)|Set di macro per convertire le stringhe all'interno di `DEVMODE` e `TEXTMETRIC` strutture.|  
  
##  <a name="a-nameatlandmfcstringconversionmacrosa--atl-and-mfc-string-conversion-macros"></a><a name="atl_and_mfc_string_conversion_macros"></a>Macro di conversione di stringhe MFC e ATL  
 Le macro di conversione di stringhe presentate in questo argomento sono valide sia per ATL che per MFC. Per ulteriori informazioni sulla conversione di stringhe MFC, vedere [TN059: utilizzo delle macro MFC MBCS/Unicode conversione](../../mfc/tn059-using-mfc-mbcs-unicode-conversion-macros.md) e [delle macro MFC e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md).  
  
##  <a name="a-namedevmodeandtextmetricstringconversionmacrosa--devmode-and-textmetric-string-conversion-macros"></a><a name="devmode_and_textmetric_string_conversion_macros"></a>DEVMODE e TEXTMETRIC macro di conversione di stringhe  
 Queste macro creano una copia di un [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) o [TEXTMETRIC](http://msdn.microsoft.com/library/windows/desktop/dd145132) struttura e convertire le stringhe all'interno della nuova struttura di un nuovo tipo di stringa. Le macro di allocare memoria nello stack per la nuova struttura e restituiscono un puntatore alla struttura di nuovo.  
  
```
MACRONAME( address_of_structure )
```  
  
### <a name="remarks"></a>Note  
 Ad esempio:  
  
 [!code-cpp[&#128; NVC_ATL_Utilities](../../atl/codesnippet/cpp/string-conversion-macros_1.cpp)]  
  
 e:  
  
 [!code-cpp[NVC_ATL_Utilities&#129;](../../atl/codesnippet/cpp/string-conversion-macros_2.cpp)]  
  
 Nei nomi delle macro, il tipo di stringa nella struttura di origine è a sinistra (ad esempio, **A**) e il tipo di stringa della struttura di destinazione è a destra (ad esempio, **W**). **A** stands for **LPSTR**, **OLE** stands for `LPOLESTR`, **T** stands for `LPTSTR`, and **W** stands for `LPWSTR`.  
  
 Di conseguenza, `DEVMODEA2W` copie un `DEVMODE` struttura con **LPSTR** stringhe in un `DEVMODE` struttura `LPWSTR` stringhe, `TEXTMETRICOLE2T` copie un `TEXTMETRIC` struttura `LPOLESTR` stringhe in un `TEXTMETRIC` struttura `LPTSTR` stringhe e così via.  
  
 Le due stringhe convertite nel `DEVMODE` struttura sono il nome del dispositivo ( **dmDeviceName**) e il nome del form ( **dmFormName**). Il `DEVMODE` macro di conversione di stringhe aggiornare anche la dimensione della struttura ( **dmSize**).  
  
 Le quattro stringhe convertite nel `TEXTMETRIC` struttura sono il primo carattere ( **tmFirstChar**), l'ultimo carattere ( **tmLastChar**), il carattere predefinito ( **tmDefaultChar**) e il carattere di interruzione ( **tmBreakChar**).  
  
 Il comportamento di `DEVMODE` e `TEXTMETRIC` macro di conversione di stringhe dipende la direttiva del compilatore in effetti, se presente. Se i tipi di origine e di destinazione sono uguali, la conversione non viene eseguita. Direttive del compilatore cambiano **T** e **OLE** come indicato di seguito:  
  
|Direttiva del compilatore attiva|T diventa|OLE diventa|  
|----------------------------------|---------------|-----------------|  
|none|**A**|**W**|  
|**UNICODE**|**W**|**W**|  
|**OLE2ANSI**|**A**|**A**|  
|**Unicode** e **OLE2ANSI**|**W**|**A**|  
  
 La tabella seguente elenca le `DEVMODE` e `TEXTMETRIC` macro di conversione della stringa.  
  
### <a name="devmode-and-textmetric-string-conversion-macros"></a>DEVMODE e TEXTMETRIC macro di conversione di stringhe  
  
|||  
|-|-|  
|`DEVMODEA2W`|`TEXTMETRICA2W`|  
|`DEVMODEOLE2T`|`TEXTMETRICOLE2T`|  
|`DEVMODET2OLE`|`TEXTMETRICT2OLE`|  
|`DEVMODEW2A`|`TEXTMETRICW2A`|  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)


