---
title: 'Classe platform:: Array | Documenti Microsoft'
ms.custom: 
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- VCCORLIB/Namespace not found::Platform
- VCCORLIB/Namespace not found::Platform::Array Constructors
- VCCORLIB/Namespace not found::Platform::Array::Value
dev_langs:
- C++
helpviewer_keywords:
- Platform::Array Class
ms.assetid: 7815ab40-88c5-42b0-83b8-081cef0cda31
caps.latest.revision: 
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8e3d2964e1488e74e7a07f20c38ee4fbbcf6e387
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="platformarray-class"></a>Platform::Array (classe)
Rappresenta una matrice unidimensionale modificabile che può essere ricevuta e passata tramite l'interfaccia ABI (Application Binary Interface).  
  
## <a name="syntax"></a>Sintassi  
  
```cpp    
template <typename T>  
private ref class Array<TArg, 1> :   
    public WriteOnlyArray<TArg, 1>,  
    public IBoxArray<TArg>   
```  
  
### <a name="members"></a>Membri  
 Platform:: Array eredita tutti i metodi da [classe platform:: writeonlyarray](../cppcx/platform-writeonlyarray-class.md) e implementa il `Value` proprietà del [interfaccia platform:: iboxarray](../cppcx/platform-iboxarray-interface.md).  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttori Array](#ctor)|Inizializza una matrice modificabile unidimensionale di tipi specificati dal parametro del modello di classe, *T*.|  
  
### <a name="methods"></a>Metodi  
 Vedere [classe platform:: writeonlyarray](../cppcx/platform-writeonlyarray-class.md).  
  
### <a name="properties"></a>Proprietà  
  
|||  
|-|-|  
|[Array](#value)|Recupera un handle alla matrice corrente.|  
  
### <a name="remarks"></a>Note  
 La classe Array è sealed e non può essere ereditata.  
  
 Il sistema di tipi Windows Runtime non supporta il concetto di matrici di matrici e pertanto non è possibile passare un IVector < platform:: Array\<T >> come un parametro di metodo o valore restituito. Per passare una matrice di matrici o una sequenza di sequenze attraverso l'interfaccia applicativa binaria (ABI), usa `IVector<IVector<T>^>`.  
  
 Per ulteriori informazioni su quando e come usare platform:: Array, vedere [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).  
  
 Il sistema di tipi Windows Runtime non supporta il concetto di matrici di matrici e pertanto non è possibile passare un IVector < platform:: Array\<T >> come un parametro di metodo o valore restituito. Per passare una matrice di matrici o una sequenza di sequenze attraverso l'interfaccia applicativa binaria (ABI), usa `IVector<IVector<T>^>`.  
  
 Questa classe è definita nel file di intestazione vccorlib.h, che è incluso automaticamente dal compilatore. È visibile in Intellisense ma non nel Visualizzatore oggetti perché non è un tipo pubblico definito in platform.winmd.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  

 
## <a name="ctor"></a>  Costruttori Array
Inizializza una matrice modificabile unidimensionale di tipi specificati dal parametro del modello di classe, *T*.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
Array(unsigned int size);  
Array(T* data, unsigned int size);    
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Parametro di modello della classe.  
  
 `size`  
 Numero di elementi nella matrice.  
  
 `data`  
 Puntatore a una matrice di dati di tipo `T` utilizzato per inizializzare l'oggetto Array.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su come creare istanze di platform:: Array, vedere [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).

## <a name="get"></a>  Metodo Array:: Get
Recupera un riferimento all'elemento di matrice in corrispondenza della posizione di indice specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp    
T& get(unsigned int index)  const;  
```  
  
#### <a name="parameters"></a>Parametri  
 `index`  
 Indice in base zero che identifica un elemento della matrice. L'indice minimo è 0 e l'indice massimo è il valore specificato per il `size` parametro nel [costruttore Array](#ctor).  
  
### <a name="return-value"></a>Valore restituito  
 Elemento di matrice specificato dal parametro `index`.  
  
## <a name="value"></a>  Proprietà Array
Recupera un handle alla matrice corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp 
property Array^ Value;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle alla matrice corrente.  

## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)   
 [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)