---
title: Attributi IDL, Aggiunta guidata metodo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.codewiz.method.idlattrib
dev_langs:
- C++
helpviewer_keywords:
- Add Method Wizard [C++]
- IDL attributes, Add Method Wizard
ms.assetid: f80c3bc1-b515-4d6c-83ee-98c2c21ba902
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4a7a1e8fe89f64ad5909e7c1415545e3b3d80196
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33337769"
---
# <a name="idl-attributes-add-method-wizard"></a>Attributi IDL, Aggiunta guidata metodo
Usare questa pagina dell'Aggiunta guidata metodo per specificare le impostazioni del linguaggio di definizione dell'interfaccia (IDL) per il metodo.  
  
 **ID**  
 Imposta l'ID numerico che identifica il metodo. Vedere [id](http://msdn.microsoft.com/library/windows/desktop/aa367040) in *MIDL Reference* (Riferimento MIDL).  
  
 Questa casella non è disponibile per le interfacce personalizzate e per le interfacce dispatch MFC.  
  
 **call_as**  
 Specifica il nome di un metodo remoto a cui è possibile associare il metodo locale. Vedere [call_as](http://msdn.microsoft.com/library/windows/desktop/aa366748) in *MIDL Reference* (Riferimento MIDL).  
  
 Non disponibile per le interfacce dispatch MFC.  
  
 **helpcontext**  
 Specifica un ID contesto che consente all'utente di visualizzare informazioni sul metodo nel file della Guida. Vedere [helpcontext](http://msdn.microsoft.com/library/windows/desktop/aa366851) in *MIDL Reference* (Riferimento MIDL).  
  
 Non disponibile per le interfacce dispatch MFC.  
  
 **helpstring**  
 Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata. L'impostazione predefinita è "method *Method name*". Vedere [helpstring](http://msdn.microsoft.com/library/windows/desktop/aa366856) in *MIDL Reference* (Riferimento MIDL).  
  
 Non disponibile per le interfacce dispatch MFC.  
  
 **Attributi aggiuntivi**  
 Non disponibile per le interfacce dispatch MFC.  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|**hidden**|Indica che il metodo esiste ma non deve essere visualizzato in un visualizzatore per utenti. Vedere [hidden](http://msdn.microsoft.com/library/windows/desktop/aa366861) in *MIDL Reference* (Riferimento MIDL).|  
|**source**|Indica che un membro del metodo è un'origine di eventi. Vedere [source](http://msdn.microsoft.com/library/windows/desktop/aa367166) in *MIDL Reference* (Riferimento MIDL).|  
|`local`|Specifica al compilatore MIDL che il metodo non è remoto. Vedere [local](http://msdn.microsoft.com/library/windows/desktop/aa367071) in *MIDL Reference* (Riferimento MIDL).|  
|**restricted**|Specifica che il metodo non può essere chiamato in modo arbitrario. Vedere [restricted](http://msdn.microsoft.com/library/windows/desktop/aa367157) in *MIDL Reference* (Riferimento MIDL).|  
|**vararg**|Specifica che il metodo accetta un numero variabile di argomenti. Per ottenere questo risultato, l'ultimo argomento deve essere una matrice protetta di tipo **VARIANT** che contiene tutti gli argomenti rimanenti. Vedere [vararg](http://msdn.microsoft.com/library/windows/desktop/aa367304) in *MIDL Reference* (Riferimento MIDL).|  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di un metodo](../ide/adding-a-method-visual-cpp.md)   
 [Aggiunta guidata metodo](../ide/add-method-wizard.md)