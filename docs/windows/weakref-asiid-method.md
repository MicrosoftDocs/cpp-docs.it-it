---
title: "Metodo WeakRef::AsIID | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::WeakRef::AsIID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AsIID (metodo)"
ms.assetid: 94e87309-32da-4dbb-8233-e77313a1f448
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Metodo WeakRef::AsIID
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Imposta il parametro del puntatore ComPtr specificato per rappresentare l'ID di interfaccia specificato.  
  
## Sintassi  
  
```  
HRESULT AsIID(  
   REFIID riid,  
   _Out_ ComPtr<IInspectable>* ptr  
);  
```  
  
#### Parametri  
 `riid`  
 ID di interfaccia.  
  
 `ptr`  
 Al termine dell'operazione, un oggetto che rappresenta il parametro `riid`.  
  
## Valore restituito  
  
-   S\_OK se l'operazione riesce; in caso contrario, HRESULT che indica il motivo dell'errore dell'operazione. `ptr` è impostato su `nullptr`.  
  
-   S\_OK se l'operazione riesce, ma l'oggetto WeakRef corrente è già stato rilasciato. Il parametro `ptr` viene impostato su `nullptr`.  
  
-   S\_OK se l'operazione riesce, ma l'oggetto WeakRef corrente non è derivato dal parametro `riid`. Il parametro `ptr` viene impostato su `nullptr`. Per altre informazioni, vedere Note.  
  
## Note  
 Se il parametro `riid` non è derivato da IInspectable, viene generato un errore. Questo errore sostituisce il valore restituito.  
  
 Il primo modello è il form da usare nel codice. Il secondo modello \(non illustrato di seguito, ma dichiarato nel file di intestazione\) è una specializzazione helper interna che supporta le funzionalità del linguaggio C\+\+, ad esempio la parola chiave di deduzione del tipo [auto](../cpp/auto-cpp.md).  
  
 A partire da Windows 10 SDK, questo metodo non imposta l'istanza di WeakRef su `nullptr` se non è stato ottenuto il riferimento debole. Si consiglia, quindi, di non usare un codice per il controllo degli errori che verifica WeakRef per `nullptr`. Controllare invece il valore HRESULT restituito per determinare se il metodo è riuscito o controllare `ptr` per `nullptr`.  
  
## Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## Vedere anche  
 [Classe WeakRef](../windows/weakref-class.md)