---
title: "Metodo ComPtr::CopyTo | Microsoft Docs"
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
  - "client/Microsoft::WRL::ComPtr::CopyTo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CopyTo (metodo)"
ms.assetid: 8801bc49-6db4-4393-a55f-a701ae3b8718
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo ComPtr::CopyTo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Copia l'interfaccia corrente o quella specificata associata a questo ComPtr al puntatore specificato.  
  
## Sintassi  
  
```  
HRESULT CopyTo(  
   _Deref_out_ InterfaceType** ptr  
);  
  
HRESULT CopyTo(  
   REFIID riid,  
   _Deref_out_ void** ptr  
) const;  
template<  
   typename U  
>  
  
HRESULT CopyTo(  
   _Deref_out_ U** ptr  
) const;  
```  
  
#### Parametri  
 `U`  
 Un nome di tipo.  
  
 `ptr`  
 Quando questa operazione completa, un puntatore a un'interfaccia richiesta.  
  
 `riid`  
 Un ID di interfaccia.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT che indica perché l'operazione implicita di QueryInterface non è riuscita.  
  
## Osservazioni  
 La prima funzione restituisce una copia di un puntatore a un'interfaccia associata con questo ComPtr.  Questa funzione restituisce sempre S\_OK.  
  
 La seconda funzione esegue un'operazione di QueryInterfaceinterfaccia associata con questo ComPtr per l'interfaccia specificata dal parametro `riid`.  
  
 La terza funzione esegue un'operazione di QueryInterfaceinterfaccia associata con questo ComPtr per l'interfaccia sottostante del parametro `U`.  
  
## Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)