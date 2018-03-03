---
title: "Proprietà predefinite | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- stock properties, about stock properties
- stock properties
ms.assetid: a89fc454-0b8e-447a-9033-4c8af46a24d9
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9bbc721669d51860c01c760a8d1f9fb899e019e3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="stock-properties"></a>Proprietà predefinite
Se si aggiunge una proprietà in una dispinterface MFC usando il [Aggiunta guidata proprietà](../ide/idl-attributes-add-property-wizard.md), è possibile scegliere una proprietà predefinita dal **nome della proprietà** nell'elenco di [nomi](../ide/names-add-property-wizard.md) pagina del procedura guidata. Di seguito sono riportate le proprietà:  
  
|Nome della proprietà|Descrizione|  
|-------------------|-----------------|  
|**Aspetto**|Restituisce o imposta un valore che determina l'aspetto del controllo. Il controllo **aspetto** proprietà possibile includono o omettono gli effetti in visualizzazione tridimensionale. Questa è una proprietà di lettura/scrittura di ambiente.|  
|`BackColor`|Restituisce o imposta il controllo ambiente `BackColor` proprietà su un colore della tavolozza (RGB) o un colore di sistema predefiniti. Per impostazione predefinita, il relativo valore corrisponde al colore di sfondo del contenitore del controllo. Questa è una proprietà di lettura/scrittura di ambiente.|  
|`BorderStyle`|Restituisce o imposta lo stile del bordo per un controllo. Si tratta di una proprietà di lettura/scrittura.|  
|**Caption**|Restituisce o imposta il controllo **didascalia** proprietà. La didascalia è il titolo della finestra. **Didascalia** non ha alcun **variabile membro** tipo di implementazione.|  
|**Enabled**|Restituisce o imposta il controllo **abilitato** proprietà. Un controllo abilitato può rispondere agli eventi generati dall'utente.|  
|**Tipo di carattere**|Restituisce o imposta il tipo di ambiente carattere del controllo. Null se il controllo non dispone di alcun tipo di carattere.|  
|`ForeColor`|Restituisce o imposta il controllo ambiente `ForeColor` proprietà.|  
|**hWnd**|Restituisce o imposta il controllo **hWnd** proprietà. **hWnd** non ha alcun **variabile membro** tipo di implementazione.|  
|**ReadyState**|Restituisce o imposta il controllo **ReadyState** proprietà. Un controllo può essere non inizializzato, inizializzato, il caricamento, interattivo o completo. Vedere [READYSTATE](https://msdn.microsoft.com/en-us/library/aa768362.aspx) nel *Internet SDK* per ulteriori informazioni.|  
|**per**|Restituisce o imposta il testo contenuto in un controllo. **Testo** non ha alcun **variabile membro** tipo di implementazione.|  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di una proprietà](../ide/adding-a-property-visual-cpp.md)   
 [Attributi IDL, Aggiunta guidata proprietà](../ide/idl-attributes-add-property-wizard.md)