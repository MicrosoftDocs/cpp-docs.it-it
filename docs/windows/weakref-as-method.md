---
title: "Metodo WeakRef::As | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::WeakRef::As"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "As (metodo)"
ms.assetid: 7173da62-b3fe-44d6-aea4-1aa97e69b221
caps.latest.revision: 6
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo WeakRef::As
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Imposta il parametro del puntatore ComPtr specificato per rappresentare l'interfaccia specificata.  
  
## Sintassi  
  
```  
  
template<  
   typename U  
>  
HRESULT As(  
   _Out_ ComPtr<U>* ptr  
);  
  
template<  
   typename U  
>  
HRESULT As(  
   _Out_ Details::ComPtrRef<ComPtr<U>> ptr  
);  
```  
  
#### Parametri  
 `U`  
 ID di interfaccia.  
  
 `ptr`  
 Al termine dell'operazione, un oggetto che rappresenta il parametro `U`.  
  
## Valore restituito  
  
-   S\_OK se l'operazione riesce; in caso contrario, HRESULT che indica il motivo dell'errore dell'operazione. `ptr` è impostato su `nullptr`.  
  
-   S\_OK se l'operazione riesce, ma l'oggetto WeakRef corrente è già stato rilasciato. Il parametro `ptr` viene impostato su `nullptr`.  
  
-   S\_OK se l'operazione riesce, ma l'oggetto WeakRef corrente non è derivato dal parametro `U`. Il parametro `ptr` viene impostato su `nullptr`.  
  
## Note  
 Se il parametro `U` è IWeakReference o non è derivato da IInspectable, viene generato un errore.  
  
 Il primo modello è il form da usare nel codice. Il secondo modello è una specializzazione helper interna che supporta le funzionalità del linguaggio C\+\+, ad esempio la parola chiave di deduzione del tipo [auto](../cpp/auto-cpp.md).  
  
 A partire da Windows 10 SDK, questo metodo non imposta l'istanza di WeakRef su `nullptr` se non è stato ottenuto il riferimento debole. Si consiglia, quindi, di non usare un codice per il controllo degli errori che verifica WeakRef per `nullptr`. Controllare invece il valore HRESULT restituito per determinare se il metodo è riuscito o controllare `ptr` per `nullptr`.  
  
## Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## Vedere anche  
 [Classe WeakRef](../windows/weakref-class.md)