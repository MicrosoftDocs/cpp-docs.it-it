---
title: "Classe HString | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HString"
dev_langs: 
  - "C++"
ms.assetid: 6709dd2e-8d72-4675-8ec7-1baa7d71854d
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe HString
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Fornisce supporto per modificare un handle HSTRING.  
  
## Sintassi  
  
```cpp  
class HString;  
```  
  
## Note  
 Il [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] fornisce l'accesso alle stringhe attraverso handle di HSTRING.  La classe HString fornisce funzioni comode e operatori per semplificare l'utilizzo di un handle di HSTRING.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore HString::HString](../windows/hstring-hstring-constructor.md)|Inizializza una nuova istanza della classe HString.|  
|[Distruttore HString::HString](../windows/hstring-tilde-hstring-destructor.md)|Elimina l'istanza corrente della classe di HString.|  
  
### Membri  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo HString::Set](../windows/hstring-set-method.md)|Imposta il valore dell'oggetto corrente di HString alla stringa di caratteri estesi o al parametro specifica di HString.|  
|[Metodo HString::Attach](../windows/hstring-attach-method.md)|Associa l'oggetto specificato di HString con l'oggetto corrente di HString.|  
|[Metodo HString::CopyTo](../windows/hstring-copyto-method.md)|Copia l'oggetto HString corrente in un oggetto HSTRING.|  
|[Metodo HString::Detach](../windows/hstring-detach-method.md)|Rimuove l'associazione con l'oggetto HString specificato dal valore sottostante.|  
|[Metodo HString::GetAddressOf](../windows/hstring-getaddressof-method.md)|Recupera un puntatore all'handle sottostante di HSTRING.|  
|[Metodo HString::Get](../windows/hstring-get-method.md)|Recupera il valore dell'handle sottostante di HSTRING.|  
|[Metodo HString::Release](../windows/hstring-release-method.md)|Elimina il valore stringa sottostante e inizializza l'oggetto corrente di HString ad un valore vuoto.|  
|[Metodo HString::MakeReference](../windows/hstring-makereference-method.md)|Crea un oggetto di HStringReference da un parametro di stringa specificato.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore HString::Operator\=](../windows/hstring-operator-assign-operator.md)|Sposta il valore di un altro oggetto di HString all'oggetto corrente di HString.|  
|[Operatore HString::Operator\=\=](../windows/hstring-operator-equality-operator.md)|Indica se i due parametri non sono uguali.|  
|[Operatore HString::Operator\!\=](../windows/hstring-operator-inequality-operator.md)|Indica se i due parametri non sono uguali.|  
  
## Gerarchia di ereditarietà  
 `HString`  
  
## Requisiti  
 **Intestazione:** corewrappers.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Metodo Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)