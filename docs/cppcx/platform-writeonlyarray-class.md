---
title: 'Classe platform:: writeonlyarray | Documenti Microsoft'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::WriteOnlyArray::begin
- VCCORLIB/Platform::WriteOnlyArray::Data
- VCCORLIB/Platform::WriteOnlyArray::end
- VCCORLIB/Platform::WriteOnlyArray::FastPass
- VCCORLIB/Platform::WriteOnlyArray::Length
- VCCORLIB/Platform::WriteOnlyArray::set
dev_langs:
- C++
helpviewer_keywords:
- Platform::WriteOnlyArray Class
ms.assetid: 92d7dd56-ec58-4b8c-88ba-9c903668b687
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8f5c1f1f0260d4f1d1c4a6fb640b7cbf1e9d3f2f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="platformwriteonlyarray-class"></a>Platform::WriteOnlyArray (classe)
Rappresenta una matrice unidimensionale usata come parametro di input quando il chiamante passa una matrice che verrà riempita dal metodo.  
  
 Questa classe di riferimento viene dichiarata come privata in vccorlib.h, di conseguenza non viene generata nei metadati ed è supportata solo da C++. Questa classe è destinata a essere usata solo come parametro di input che riceve una matrice allocata dal chiamante. Non può essere costruita dal codice utente. Consente al metodo C++ di scrivere direttamente in una matrice, un modello noto come *FillArray* . Per ulteriori informazioni, vedere [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
private ref class WriteOnlyArray<T, 1>  
```  
  
### <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
 Questi metodi presentano accessibilità interna, ovvero sono accessibili solo all'interno dell'app o del componente C++.  
  
|nome|Descrizione|  
|----------|-----------------|  

|[Writeonlyarray:: Begin](#begin)| Un iteratore che punta al primo elemento della matrice. |  
|[Writeonlyarray:: data](#data)| Un puntatore al buffer di dati. |  
|[Writeonlyarray:: end](#end)| Un iteratore che punta alla prima posizione oltre l'ultimo elemento nella matrice. |  
|[Writeonlyarray:: Fastpass](#fastpass)| Indica se la matrice può utilizzare il meccanismo FastPass, ovvero un'ottimizzazione eseguita in modo trasparente dal sistema. Non usarla nel codice |  
|[Writeonlyarray:: Length](#length)| Restituisce il numero di elementi nella matrice. |  
|[Writeonlyarray:: set](#set)| Imposta l'elemento specificato al valore specificato. |  

  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `WriteOnlyArray`  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
 **Metadati:** Platform.winmd  
  
 **Spazio dei nomi:** Platform  

## <a name="begin"></a>  WriteOnlyArray::begin (metodo)
Restituisce un puntatore al primo elemento della matrice.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
T* begin() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al primo elemento della matrice.  
  
### <a name="remarks"></a>Note  
 Questo iteratore può essere usato con algoritmi STL quali `std::sort` per intervenire sugli elementi della matrice.  
  


## <a name="data"></a>  Proprietà WriteOnlyArray::Data
Puntatore al buffer di dati.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
property T* Data{  
   T* get() const;  
}  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore ai byte di matrice non elaborati.  
  


## <a name="end"></a>  WriteOnlyArray::end (metodo)
Restituisce un puntatore oltre l'ultimo elemento della matrice.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
T* end() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore di un puntatore oltre l'ultimo elemento della matrice.  
  
### <a name="remarks"></a>Note  
 Questo iteratore può essere usato con algoritmi STL per eseguire operazioni quali `std::sort` sugli elementi della matrice.  
  


## <a name="fastpass"></a>  Proprietà WriteOnlyArray::FastPass
Indica se l'ottimizzazione FastPass interna può essere eseguita. Non è destinata all'uso da parte del codice utente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
property bool FastPass{  
   bool get() const;  
}  
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore booleano che indica se la matrice è FastPass.  
  


## <a name="get"></a>  Writeonlyarray:: Get (metodo)
Restituisce l'elemento in corrispondenza dell'indice specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
T& get(  
   unsigned int indexArg) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `indexArg`  
  
### <a name="return-value"></a>Valore restituito  
  


## <a name="length"></a>  Proprietà WriteOnlyArray::Length
Restituisce il numero di elementi nella matrice allocata dal chiamante.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
property unsigned int Length{  
   unsigned int get() const;  
}  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi nella matrice.  
  


## <a name="set"></a>  WriteOnlyArray::set (funzione)
Imposta il valore specificato in corrispondenza dell'indice specificato nella matrice.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
T& set(  
   unsigned int indexArg,  
   T valueArg);  
```  
  
### <a name="parameters"></a>Parametri  
 `indexArg`  
 Indice dell'elemento da impostare.  
  
 `valueArg`  
 Valore da impostare in corrispondenza di `indexArg`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'elemento appena impostato.  
  

  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su come interpretare il valore HRESULT, vedere [struttura dei codici di errore COM](http://go.microsoft.com/fwlink/p/?LinkId=262045).  
  
  
## <a name="see-also"></a>Vedere anche  
 [Piattaforma Namespace](platform-namespace-c-cx.md)   
 [Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)