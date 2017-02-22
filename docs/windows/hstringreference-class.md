---
title: "Classe HStringReference | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HStringReference"
dev_langs: 
  - "C++"
ms.assetid: 9bf823b1-17eb-4ac4-8c5d-27d27c7a4150
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Classe HStringReference
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta un HSTRING creato da una stringa esistente.  
  
## Sintassi  
  
```cpp  
class HStringReference;  
```  
  
## Note  
 La durata del buffer di sicurezza nel nuovo HSTRING non è gestita da [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  Il chiamante assegna una stringa di origine nello stack frame per evitare un'allocazione heap e per eliminare il rischio di perdite di memoria.  Inoltre, il chiamante deve assicurarsi che la stringa di origine rimanga invariata durante il ciclo di vita di HSTRING associato.  Per ulteriori informazioni, vedere [WindowsCreateStringReference function](http://msdn.microsoft.com/it-it/0361bb7e-da49-4289-a93e-de7aab8712ac).  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore HStringReference::HStringReference](../windows/hstringreference-hstringreference-constructor.md)|Inizializza una nuova istanza della classe HStringReference.|  
  
### Membri  
  
|Membro|Descrizione|  
|------------|-----------------|  
|[Metodo HStringReference::CopyTo](../windows/hstringreference-copyto-method.md)|Copia l'oggetto HStringReference corrente in un oggetto HSTRING.|  
|[Metodo HStringReference::Get](../windows/hstringreference-get-method.md)|Recupera il valore dell'handle sottostante di HSTRING.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore HStringReference::Operator\=](../windows/hstringreference-operator-assign-operator.md)|Sposta il valore di un altro oggetto di HStringReference all'oggetto corrente di HStringReference.|  
|[Operatore HStringReference::Operator\=\=](../windows/hstringreference-operator-equality-operator.md)|Indica se i due parametri non sono uguali.|  
|[Operatore HStringReference::Operator\!\=](../windows/hstringreference-operator-inequality-operator.md)|Indica se i due parametri non sono uguali.|  
  
## Gerarchia di ereditarietà  
 `HStringReference`  
  
## Requisiti  
 **Intestazione:** corewrappers.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Metodo Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)