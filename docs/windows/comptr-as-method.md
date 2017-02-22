---
title: "Metodo ComPtr::As | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::ComPtr::As"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "As (metodo)"
ms.assetid: 2ad6c262-9bdb-4c59-a330-1af8bcd445cc
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Metodo ComPtr::As
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Restituisce un oggetto ComPtr che rappresenta l'interfaccia identificata dal parametro del modello specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
template<  
   typename U  
>  
HRESULT As(  
   _Out_ ComPtr<U>* p  
) const;  
  
template<  
   typename U  
>  
HRESULT As(  
   _Out_ Details::ComPtrRef<ComPtr<U>> p  
) const;  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `U`  
 L'interfaccia per essere rappresentato dal parametro `p`.  
  
 `p`  
 Un oggetto ComPtr che rappresenta l'interfaccia specificata dal parametro `U`. Parametro `p` non deve fare riferimento all'oggetto ComPtr corrente.  
  
## <a name="remarks"></a>Note  
 Il primo modello è il form da usare nel codice. Il secondo modello è una specializzazione helper interno, che supporta la funzionalità del linguaggio C++, ad esempio il [auto](../cpp/auto-cpp.md) parola chiave di deduzione del tipo.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [ComPtr (classe)](../windows/comptr-class.md)