---
title: Attributi IDL, aggiunta guidata metodo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.codewiz.method.idlattrib
dev_langs:
- C++
helpviewer_keywords:
- Add Method Wizard [C++]
- IDL attributes, Add Method Wizard
ms.assetid: f80c3bc1-b515-4d6c-83ee-98c2c21ba902
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9792f8b7758ff5a1e5742b6643d9f73931bce6f9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="idl-attributes-add-method-wizard"></a>Attributi IDL, Aggiunta guidata metodo
Utilizzare questa pagina dell'Aggiunta guidata metodo per specificare eventuali impostazioni interface definition language (IDL) per il metodo.  
  
 **ID**  
 Imposta l'ID numerico che identifica il metodo. Vedere [id](http://msdn.microsoft.com/library/windows/desktop/aa367040) nel *MIDL riferimento*.  
  
 Questa casella è disponibile per le interfacce personalizzate e non è disponibile per le interfacce dispatch MFC.  
  
 **call_as**  
 Specifica il nome di un metodo remoto a cui è possibile eseguire il mapping di questo metodo locale. Vedere [call_as](http://msdn.microsoft.com/library/windows/desktop/aa366748) nel *MIDL riferimento*.  
  
 Non è disponibile per le interfacce dispatch MFC.  
  
 **helpcontext**  
 Specifica un ID di contesto che consente di visualizzare informazioni su questo metodo nel file della Guida. Vedere [helpcontext](http://msdn.microsoft.com/library/windows/desktop/aa366851) nel *MIDL riferimento*.  
  
 Non è disponibile per le interfacce dispatch MFC.  
  
 **helpstring**  
 Specifica una stringa di caratteri utilizzato per descrivere l'elemento a cui viene applicata. Per impostazione predefinita, viene impostata su "metodo *nome del metodo*." Vedere [helpstring](http://msdn.microsoft.com/library/windows/desktop/aa366856) nel *MIDL riferimento*.  
  
 Non è disponibile per le interfacce dispatch MFC.  
  
 **Attributi aggiuntivi**  
 Non è disponibile per le interfacce dispatch MFC.  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|**hidden**|Indica che il metodo esiste ma non deve essere visualizzato in un visualizzatore per utente. Vedere [nascosto](http://msdn.microsoft.com/library/windows/desktop/aa366861) nel *MIDL riferimento*.|  
|**origine**|Indica che un membro del metodo è un'origine di eventi. Vedere [origine](http://msdn.microsoft.com/library/windows/desktop/aa367166) nel *MIDL riferimento*.|  
|`local`|Specifica al compilatore MIDL che il metodo non è remoto. Vedere [locale](http://msdn.microsoft.com/library/windows/desktop/aa367071) nel *MIDL riferimento*.|  
|**restricted**|Specifica che il metodo non può essere chiamato in modo arbitrario. Vedere [limitato](http://msdn.microsoft.com/library/windows/desktop/aa367157) nel *MIDL riferimento*.|  
|**vararg**|Specifica che il metodo accetta un numero variabile di argomenti. A tale scopo, l'ultimo argomento deve essere una matrice protetta di **VARIANT** tipo che contiene tutti gli argomenti rimanenti. Vedere [vararg](http://msdn.microsoft.com/library/windows/desktop/aa367304) nel *MIDL riferimento*.|  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di un metodo](../ide/adding-a-method-visual-cpp.md)   
 [Aggiunta guidata metodo](../ide/add-method-wizard.md)