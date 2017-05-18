---
title: Enumerazione UICheckState | Documenti Microsoft
ms.custom: 
ms.date: 04/03/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- afxwinforms/uicheckstate
dev_langs:
- C++
helpviewer_keywords:
- uicheckstate enumeration
ms.assetid: 2ac0098c-20e7-410c-9685-5ead5cb02b63
caps.latest.revision: 17
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: b943ef8dd652df061965fe81ecc9c08115636141
ms.openlocfilehash: d30ddee047597750d4627efee8ec8d9e01a520d6
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---

# <a name="uicheckstate-enumeration"></a>Enumerazione UICheckState
Descrive lo stato di controllo di un elemento dell'interfaccia utente per il comando.  
   
### <a name="syntax"></a>Sintassi   
```  
public enum class 
{  
   [DefaultValue(typeid<Microsoft::VisualC::MFC::UICheckState>, "Checked")]  
   Unchecked,   
   Checked,   
   Indeterminate 
};  
```  
   
### <a name="remarks"></a>Note  
 [ICommandUI::Check](icommandui-interface.md#check) utilizza questi valori per descrivere lo stato di un elemento dell'interfaccia utente.    
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwinforms. h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)  

