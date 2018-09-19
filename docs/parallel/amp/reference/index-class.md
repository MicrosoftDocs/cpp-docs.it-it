---
title: Classe index | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-amp
ms.topic: reference
f1_keywords:
- AMP/index
- AMP/Concurrency::index::index
- AMP/Concurrency::index::rank
dev_langs:
- C++
helpviewer_keywords:
- index structure
ms.assetid: cbe79b08-0ba7-474c-9828-f1a71da39eb3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: da6dae3aa76e593a3a98ff25b4d327faf284459e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46097133"
---
# <a name="index-class"></a>Classe index
Definisce un *N*-dimensionale indice pographics-cpp-amp.md.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <int _Rank>  
class index;  
```  
  
#### <a name="parameters"></a>Parametri  
*_Rank*<br/>
Il numero di dimensioni o il numero di dimensioni.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore di indice](#ctor)|Inizializza una nuova istanza della classe `index`.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operator--](#operator--)|Decrementa ogni elemento del `index` oggetto.|  
|[operator(mod)=](#operator_mod_eq)|Calcola il modulo (resto) di ogni elemento di `index` quando tale elemento viene diviso per un numero dell'oggetto.|  
|[operator*=](#operator_star_eq)|Moltiplica ciascun elemento del `index` oggetto da un numero.|  
|[operator/=](#operator_div_eq)|Divide ogni elemento del `index` oggetto da un numero.|  
|[index::operator\[\]](#operator_at)|Restituisce l'elemento in corrispondenza dell'indice specificato.|  
|[operator++](#operator_add_add)|Incrementa ogni elemento del `index` oggetto.|  
|[operator+=](#operator_add_eq)|Aggiunge il numero specificato ad ogni elemento del `index` oggetto.|  
|[operator=](#operator_eq)|Copia il contenuto dell'oggetto specificato `index` in questo oggetto.|  
|[operator-=](#operator_-_eq)|Sottrae il numero specificato da ogni elemento del `index` oggetto.|  

  
### <a name="public-constants"></a>Costanti pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Rank (costante)](#rank)|Memorizza il rango del `index` oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `index`  
  
## <a name="remarks"></a>Note  
 Il `index` struttura rappresenta un vettore di coordinate *N* integer che specifica una posizione univoca in un' *N*-spazio dimensionale. I valori del vettore vengono ordinati dal più significativo al meno significativo. È possibile recuperare i valori dei componenti utilizzando [operatore =](#operator_eq).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp.h  
  
 **Spazio dei nomi:** Concurrency  


## <a name="index_ctor"></a> Costruttore di indice
Inizializza una nuova istanza della classe di indice.

```  
index() restrict(amp,cpu);

index(
   const index<_Rank>& _Other
) restrict(amp,cpu);

explicit index(
   int _I
) restrict(amp,cpu);

index(
   int _I0,
   int _I1
) restrict(amp,cpu);

index(
   int _I0,
   int _I1,
   int _I2
) restrict(amp,cpu);

explicit index(
   const int _Array[_Rank]
) restrict(amp,cpu);
``` 

### <a name="parameters"></a>Parametri

_Array  
Una matrice unidimensionale con i valori di pertinenza.  
_I  
Posizione di indice in un indice unidimensionale.  
_I0  
La lunghezza della dimensione più significativa.  
_I1  
La lunghezza della dimensione prossima-a-più significativo.  
_I2  
Lunghezza della dimensione meno significativa.  
_Other  
Oggetto indice su cui si basa il nuovo oggetto index.  

## <a name="operator--"></a>  operator-
Decrementa ogni elemento dell'oggetto index.  
```  
index<_Rank>& operator--() restrict(amp,cpu);  

index operator--(
   int
) restrict(amp,cpu);
```  
### <a name="return-values"></a>Valori restituiti
Per l'operatore di prefisso, l'oggetto indice (* questo). Per l'operatore di suffisso, un nuovo oggetto index.

## <a name="operator_mod_eq"></a>  operator(MOD) =   
Calcola il modulo (resto) di ogni elemento nell'oggetto indice quando tale elemento viene diviso per il numero specificato.

```  
index<_Rank>& operator%=(
   int _Rhs
) restrict(cpu, amp);
```  
### <a name="parameters"></a>Parametri
_Rhs il numero da dividere per trovare il modulo.
Valore restituito oggetto index.

## <a name="operator_star_eq"></a>  operator*=   
Moltiplica ciascun elemento nell'oggetto indice del numero specificato.
```
index<_Rank>& operator*=(
   int _Rhs
) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri
_Rhs il numero da moltiplicare.

## <a name="operator_div_eq"></a>  operator/= 
Divide ogni elemento nell'oggetto indice per il numero specificato.

```
index<_Rank>& operator/=(
   int _Rhs
) restrict(amp,cpu);
``` 
### <a name="parameters"></a>Parametri
_Rhs il numero per cui dividere.

## <a name="operator_at"></a>  operator\[\]  
Restituisce il componente dell'indice in corrispondenza della posizione specificata.

```
int operator[] (
   unsigned _Index
) const restrict(amp,cpu);

int& operator[] (
   unsigned _Index
) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri
Index un numero intero compreso tra 0 e il numero di dimensioni meno 1.

### <a name="return-value"></a>Valore restituito
L'elemento in corrispondenza dell'indice specificato.

### <a name="remarks"></a>Note
Nell'esempio seguente consente di visualizzare i valori dei componenti dell'indice.
```  
// Prints 1 2 3.
concurrency::index<3> idx(1, 2, 3);
std::cout << idx[0] << "\n";
std::cout << idx[1] << "\n";
std::cout << idx[2] << "\n";
```

## <a name="operator_add_add"></a>  operator + +   
Incrementa ogni elemento dell'oggetto index.
```  
index<_Rank>& operator++() restrict(amp,cpu);

index<_Rank> operator++(
   int
) restrict(amp,cpu);
```  
### <a name="return-value"></a>Valore restituito
Per l'operatore di prefisso, l'oggetto indice (* questo). Per l'operatore di suffisso, un nuovo oggetto index.

## <a name="operator_add_eq"></a>  operator+=   
Aggiunge il numero specificato ad ogni elemento dell'oggetto index.
```  
index<_Rank>& operator+=(
   const index<_Rank>& _Rhs
) restrict(amp,cpu);

index<_Rank>& operator+=(
   int _Rhs
) restrict(amp,cpu);
``` 
### <a name="parameters"></a>Parametri
_Rhs numero da aggiungere.

### <a name="return-value"></a>Valore restituito
Oggetto indice.

## <a name="operator_eq"></a>  operator=   
Copia il contenuto dell'oggetto dell'indice specificato in questo.
```  
index<_Rank>& operator=(
   const index<_Rank>& _Other
) restrict(amp,cpu);
``` 
### <a name="parameters"></a>Parametri
Oggetto index da copiare da _Other.

### <a name="return-value"></a>Valore restituito
Un riferimento a questo oggetto indice.

## <a name="operator_-_eq"></a>  operator-=
Sottrae il numero specificato da ogni elemento dell'oggetto index.
```  
index<_Rank>& operator-=(
   const index<_Rank>& _Rhs
) restrict(amp,cpu);

index<_Rank>& operator-=(
   int _Rhs
) restrict(amp,cpu);
```  
### <a name="parameters"></a>Parametri
_Rhs il numero da sottrarre.

### <a name="return-value"></a>Valore restituito
Oggetto indice.   

## <a name="rank"></a>  numero di dimensioni  
  Ottiene il rango dell'oggetto index.
```
static const int rank = _Rank;
``` 
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
