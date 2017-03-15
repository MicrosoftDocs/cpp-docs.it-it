---
title: "Metodo WeakRef::CopyTo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::WeakRef::CopyTo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CopyTo (metodo)"
ms.assetid: f83de6da-b3d4-41a6-9845-cd725ecf3b75
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo WeakRef::CopyTo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Assegna un puntatore a un'interfaccia, se disponibile, per la variabile del puntatore specificato.  
  
## Sintassi  
  
```  
HRESULT CopyTo(  
   REFIID riid,  
   _Deref_out_ IInspectable** ptr  
);  
  
template<  
   typename U  
>  
HRESULT CopyTo(  
   _Deref_out_ U** ptr  
);  
  
HRESULT CopyTo(  
   _Deref_out_ IWeakReference** ptr  
);  
```  
  
#### Parametri  
 `U`  
 Puntatore a un'interfaccia IInspectable. Se `U` non è derivato da IInspectable, viene generato un errore.  
  
 `riid`  
 ID di interfaccia. Se `riid` non è derivato da **IWeakReference**, viene generato un errore.  
  
 `ptr`  
 Puntatore indiretto doppio IInspectable o IWeakReference.  
  
## Valore restituito  
 S\_OK se riesce; in caso contrario, HRESULT che descrive l'errore. Per altre informazioni, vedere la sezione Note.  
  
## Note  
 Il valore restituito S\_OK indica che l'operazione è riuscita, ma non se il riferimento debole è stato risolto in un riferimento forte. Se viene restituito S\_OK, verificare che il parametro `p` sia un riferimento forte, ossia che il parametro `p` non sia uguale a `nullptr`.  
  
 A partire da Windows 10 SDK, questo metodo non imposta l'istanza di WeakRef su `nullptr` se non è stato ottenuto il riferimento debole. Si consiglia, quindi, di non usare un codice per il controllo degli errori che verifica WeakRef per `nullptr`. Controllare invece il valore HRESULT restituito per determinare se il metodo è riuscito o controllare `ptr` per `nullptr`.  
  
## Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## Vedere anche  
 [Classe WeakRef](../windows/weakref-class.md)