---
title: "Funzione Make | Microsoft Docs"
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
  - "implements/Microsoft::WRL::Make"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Make (funzione)"
ms.assetid: 66704143-df99-4a95-904d-ed99607e1034
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzione Make
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Inizializza la classe specificata [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  Utilizzare questa funzione per creare un'istanza di un componente definita nello stesso modulo.  
  
## Sintassi  
  
```  
template <  
   typename T,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6,  
   typename TArg7,  
   typename TArg8,  
   typename TArg9  
>  
ComPtr<T> Make(  
   TArg1 &&arg1,  
   TArg2 &&arg2,  
   TArg3 &&arg3,  
   TArg4 &&arg4,  
   TArg5 &&arg5,  
   TArg6 &&arg6,  
   TArg7 &&arg7,  
   TArg8 &&arg8,  
   TArg9 &&arg9  
);  
template <  
   typename T,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6,  
   typename TArg7,  
   typename TArg8  
>  
ComPtr<T> Make(  
   TArg1 &&arg1,  
   TArg2 &&arg2,  
   TArg3 &&arg3,  
   TArg4 &&arg4,  
   TArg5 &&arg5,  
   TArg6 &&arg6,  
   TArg7 &&arg7,  
   TArg8 &&arg8  
);  
template <  
   typename T,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6,  
   typename TArg7  
>  
ComPtr<T> Make(  
   TArg1 &&arg1,  
   TArg2 &&arg2,  
   TArg3 &&arg3,  
   TArg4 &&arg4,  
   TArg5 &&arg5,  
   TArg6 &&arg6,  
   TArg7 &&arg7  
);  
template <  
   typename T,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6  
>  
ComPtr<T> Make(  
   TArg1 &&arg1,  
   TArg2 &&arg2,  
   TArg3 &&arg3,  
   TArg4 &&arg4,  
   TArg5 &&arg5,  
   TArg6 &&arg6  
);  
template <  
   typename T,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5  
>  
ComPtr<T> Make(  
   TArg1 &&arg1,  
   TArg2 &&arg2,  
   TArg3 &&arg3,  
   TArg4 &&arg4,  
   TArg5 &&arg5  
);  
template <  
   typename T,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4  
>  
ComPtr<T> Make(  
   TArg1 &&arg1,  
   TArg2 &&arg2,  
   TArg3 &&arg3,  
   TArg4 &&arg4  
);  
template <  
   typename T,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3  
>  
ComPtr<T> Make(  
   TArg1 &&arg1,  
   TArg2 &&arg2,  
   TArg3 &&arg3  
);  
template <  
   typename T,  
   typename TArg1,  
   typename TArg2  
>  
ComPtr<T> Make(  
   TArg1 &&arg1,  
   TArg2 &&arg2  
);  
template <  
   typename T,  
   typename TArg1  
>  
ComPtr<T> Make(  
   TArg1 &&arg1  
);  
template <  
   typename T  
>  
ComPtr<T> Make();  
```  
  
#### Parametri  
 `T`  
 Una classe definita dall'utente che eredita da `WRL::RuntimeClass`.  
  
 `TArg1`  
 Tipo di argomento 1 passato alla classe di runtime specificata.  
  
 `TArg2`  
 Tipo di argomento 2 passato alla classe di runtime specificata.  
  
 `TArg3`  
 Tipo di argomento 3 passato alla classe di runtime specificata.  
  
 `TArg4`  
 Tipo di argomento 4 passato alla classe di runtime specificata.  
  
 `TArg5`  
 Tipo di argomento 5 passato alla classe di runtime specificata.  
  
 `TArg6`  
 Tipo di argomento 6 passato alla classe di runtime specificata.  
  
 `TArg7`  
 Tipo di argomento 7 passato alla classe di runtime specificata.  
  
 `TArg8`  
 Tipo di argomento 8 passato alla classe di runtime specificata.  
  
 `TArg9`  
 Tipo di argomento 9 passato alla classe di runtime specificata.  
  
 `arg1`  
 Argomento 1 passato alla classe di runtime specificata.  
  
 `arg2`  
 Argomento 2 passato alla classe di runtime specificata.  
  
 `arg3`  
 Argomento 3 passato alla classe di runtime specificata.  
  
 `arg4`  
 Argomento 4 passato alla classe di runtime specificata.  
  
 `arg5`  
 Argomento 5 passato alla classe di runtime specificata.  
  
 `arg6`  
 Argomento 6 passato alla classe di runtime specificata.  
  
 `arg7`  
 Argomento 7 passato alla classe di runtime specificata.  
  
 `arg8`  
 Argomento 8 passato alla classe di runtime specificata.  
  
 `arg9`  
 Argomento 9 passato alla classe di runtime specificata.  
  
## Valore restituito  
 Un oggetto `ComPtr<T>` in caso di esito positivo; in caso contrario, `nullptr`.  
  
## Osservazioni  
 Vedere [Procedura: creare direttamente un'istanza dei componenti WRL](../windows/how-to-instantiate-wrl-components-directly.md) per informazioni sulle differenze tra questa funzione e [Microsoft::WRL::Details::MakeAndInitialize](../windows/makeandinitialize-function.md), e per un esempio.  
  
## Requisiti  
 **Intestazione:** implements.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)