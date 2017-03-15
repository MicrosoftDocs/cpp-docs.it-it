---
title: "Operatore Mutex::operator= | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::Mutex::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator= (operatore)"
ms.assetid: 9b0ee206-a930-4fea-8dc0-1f79839e9d13
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore Mutex::operator=
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Assegna il Mutex specificato (spostamento) dell'oggetto all'oggetto Mutex corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
Mutex& operator=(  
   _Inout_ Mutex&& h  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `h`  
 Un riferimento rvalue a un oggetto Mutex.  
  
## <a name="return-value"></a>Valore restituito  
 Un riferimento all'oggetto Mutex corrente.  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere la **semantica di spostamento** sezione [dichiaratore di riferimento Rvalue: & &](../cpp/rvalue-reference-declarator-amp-amp.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers
 
 ## <a name="see-also"></a>Vedere anche
 [Mutex (classe)](../windows/mutex-class1.md)