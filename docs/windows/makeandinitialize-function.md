---
title: "Funzione MakeAndInitialize | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details::MakeAndInitialize"
dev_langs: 
  - "C++"
ms.assetid: 71ceeb12-d2a2-4317-b010-3dcde1b39467
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Funzione MakeAndInitialize
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Inizializza la classe specificata [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  Utilizzare questa funzione per creare un'istanza di un componente definita nello stesso modulo.  
  
## Sintassi  
  
```cpp  
template <typename T, typename I,   
typename TArg1,   
typename TArg2,   
typename TArg3,   
typename TArg4,   
typename TArg5,   
typename TArg6,   
typename TArg7,   
typename TArg8,   
typename TArg9> HRESULT MakeAndInitialize(_Outptr_result_nullonfailure_ I** ppvObject, TArg1 &&arg1, TArg2 &&arg2, TArg3 &&arg3, TArg4 &&arg4, TArg5 &&arg5, TArg6 &&arg6, TArg7 &&arg7, TArg8 &&arg8, TArg9 &&arg9) throw()  
  
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
 Valore `HRESULT`.  
  
## Osservazioni  
 Vedere [Procedura: creare direttamente un'istanza dei componenti WRL](../windows/how-to-instantiate-wrl-components-directly.md) per informazioni sulle differenze tra questa funzione e [Microsoft::WRL::Make](../windows/make-function.md), e per un esempio.  
  
## Requisiti  
 **Intestazione:** implements.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)