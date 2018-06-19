---
title: Classe (C++ AMP) extent | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-amp
ms.topic: reference
f1_keywords:
- extent
- AMP/extent
- AMP/Concurrency::extent::extent
- AMP/Concurrency::extent::contains
- AMP/Concurrency::extent::size
- AMP/Concurrency::extent::tile
- AMP/Concurrency::extent::rank Constant
dev_langs:
- C++
helpviewer_keywords:
- extent structure
ms.assetid: edb5de3d-3935-4dbb-8365-4cc6c4fb0269
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 901ba590d208db7c9cf3803e77e8481a2b896ea2
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33693250"
---
# <a name="extent-class-c-amp"></a>Classe extent (C++ AMP)
Rappresenta un vettore di *N* valori interi che specificano i limiti di un *N*-spazio dimensionale che presenta un'origine di 0. I valori in un vettore sono ordinati dal più significativo al meno significativo.  
  
### <a name="syntax"></a>Sintassi  
  
```  
template <int _Rank>  
class extent;  
```  
  
### <a name="parameters"></a>Parametri  
 `_Rank`  
 Il rango di `extent` oggetto.  

 ## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp.h  
  
 **Spazio dei nomi:** Concurrency  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore extent](#ctor)|Inizializza una nuova istanza della classe `extent`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[contiene](#contains)|Verifica che l'oggetto specificato `extent` oggetto con la classificazione specificata.|  
|[size](#size)|Restituisce le dimensioni totali lineare dell'extent (in unità di elementi).|  
|[riquadro](#tile)|Produce un `tiled_extent` oggetto con il riquadro di extent specificato da dimensioni specificate.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operator-](#operator_min)|Restituisce un nuovo `extent` oggetto creato mediante la sottrazione di `index` elementi dal corrispondente `extent` elementi.|  
|[operator--](#operator_min_min)|Decrementa ogni elemento del `extent` oggetto.|  
|[operator%=](#operator_mod_eq)|Calcola il modulo (resto) di ogni elemento di `extent` oggetto quando tale elemento viene diviso per un numero.|  
|[operator*=](#operator_star_eq)|Moltiplica ogni elemento del `extent` oggetto da un numero.|  
|[operator/=](#operator_min_eq)|Divide ogni elemento del `extent` oggetto da un numero.|  
|[extent::operator\[\]](#operator_at)|Restituisce l'elemento in corrispondenza dell'indice specificato.|  
|[operator+](#operator_add)|Restituisce un nuovo `extent` oggetto che viene creato aggiungendo corrispondente `index` e `extent` elementi.|  
|[operator++](#operator_add_add)|Incrementa ogni elemento del `extent` oggetto.|  
|[operator+=](#operator_add_eq)|Aggiunge il numero specificato per ogni elemento del `extent` oggetto.|  
|[operator=](#operator_eq)|Copia il contenuto di un altro `extent` specificato in questo oggetto.|  
|[operator-=](#operator_min_eq)|Sottrae il numero specificato da ogni elemento del `extent` oggetto.|  

  
### <a name="public-constants"></a>Costanti pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Rank (costante)](#rank)|Ottiene il rango di `extent` oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `extent`  


## <a name="contains"></a> contiene 

Indica se l'oggetto specificato [indice](index-class.md) valore è contenuto all'interno dell'oggetto 'extent'.  
  
### <a name="syntax"></a>Sintassi  
  
```  
bool contains(const index<rank>& _Index) const restrict(amp,cpu);  
```  
  
### <a name="parameters"></a>Parametri  
 `_Index`  
 Il `index` valore da testare.  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se l'oggetto specificato `index` valore è contenuto nel `extent` oggetto; in caso contrario, `false`.  
  
##  <a name="ctor"></a> extent 

Inizializza una nuova istanza della classe 'extent'.  
  
### <a name="syntax"></a>Sintassi  
  
```  
extent() restrict(amp,cpu);    
extent(const extent<_Rank>& _Other) restrict(amp,cpu);    
explicit extent(int _I) restrict(amp,cpu);    
extent(int _I0,  int _I1) restrict(amp,cpu);    
extent(int _I0,  int _I1, int _I2) restrict(amp,cpu);    
explicit extent(const int _Array[_Rank])restrict(amp,cpu);  
```  
  
### <a name="parameters"></a>Parametri  
 `_Array`  
 Matrice di `_Rank` interi che viene utilizzato per creare il nuovo `extent` oggetto.  
  
 `_I`  
 La lunghezza dell'estensione.  
  
 `_I0`  
 La lunghezza della dimensione più significativa.  
  
 `_I1`  
 La lunghezza della dimensione avanti-a-più significativo.  
  
 `_I2`  
 La lunghezza della dimensione meno significativa.  
  
 `_Other`  
 Un `extent` oggetto su cui il nuovo `extent` base dell'oggetto.  
  
## <a name="remarks"></a>Note  
 Il costruttore inizializza un `extent` oggetto con una classificazione di tre.  
  
 Se una matrice viene utilizzata per costruire un `extent` dell'oggetto, la lunghezza della matrice deve corrispondere il rango del `extent` oggetto.  
  
##  <a name="operator_mod_eq"></a> operatore % = 

Calcola il modulo (resto) di ogni elemento nella misura consentita quando tale elemento viene diviso per un numero.  
  
### <a name="syntax"></a>Sintassi  
  
```  
extent<_Rank>& operator%=(int _Rhs) restrict(cpu, direct3d);  
```  
  
### <a name="parameters"></a>Parametri  
 `_Rhs`  
 Numero di cui trovare il modulo di.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `extent`.  
  
##  <a name="operator_star_eq"></a> operatore * = 

Moltiplica ogni elemento nell'oggetto 'extent' base al numero specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```  
extent<_Rank>& operator*=(int _Rhs) restrict(amp,cpu);  
```  
  
### <a name="parameters"></a>Parametri  
 `_Rhs`  
 Il numero da moltiplicare.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `extent`.  
  
## <a name="operator_add"></a> operator + 

Restituisce un nuovo `extent` oggetto creato aggiungendo corrispondente `index` e `extent` elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
extent<_Rank> operator+(const index<_Rank>& _Rhs) restrict(amp,cpu);  
```  
  
### <a name="parameters"></a>Parametri  
 `_Rhs`  
 Il `index` oggetto che contiene gli elementi da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
 Nuovo oggetto `extent`.  
  
##  <a name="operator_add_add"></a> operator + + 

Incrementa ogni elemento dell'oggetto 'extent'.  
  
### <a name="syntax"></a>Sintassi  
  
```  
extent<_Rank>& operator++() restrict(amp,cpu);    
extent<_Rank> operator++(int)restrict(amp,cpu);  
```  
  
### <a name="return-value"></a>Valore restituito  
 Per l'operatore prefisso, il `extent` oggetto (`*this`). Per l'operatore di suffisso, un nuovo `extent` oggetto.  
  
##  <a name="operator_add_eq"></a> + = (operatore) 

Aggiunge il numero specificato per ogni elemento dell'oggetto 'extent'.  
  
### <a name="syntax"></a>Sintassi  
  
```  
extent<_Rank>& operator+=(const extent<_Rank>& _Rhs) restrict(amp,cpu);    
extent<_Rank>& operator+=(const index<_Rank>& _Rhs) restrict(amp,cpu);    
extent<_Rank>& operator+=(int _Rhs) restrict(amp,cpu);  
```  
  
### <a name="parameters"></a>Parametri  
 `_Rhs`  
 Il numero, indice o extent da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
 L'oggetto `extent` risultante.  
  
##  <a name="operator_min"></a> Operatore operator- 

Crea un nuovo `extent` oggetto mediante la sottrazione di ogni elemento nell'oggetto specificato `index` oggetto dall'elemento corrispondente in questa `extent` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
extent<_Rank> operator-(const index<_Rank>& _Rhs) restrict(amp,cpu);  
```  
  
### <a name="parameters"></a>Parametri  
 `_Rhs`  
 Il `index` oggetto che contiene gli elementi da sottrarre.  
  
### <a name="return-value"></a>Valore restituito  
 Nuovo oggetto `extent`.  
  
##  <a name="operator_min_min"></a> operator- 

Decrementa ogni elemento nell'oggetto 'extent'.  
  
### <a name="syntax"></a>Sintassi  
  
```  
extent<_Rank>& operator--() restrict(amp,cpu);    
extent<_Rank> operator--(int)restrict(amp,cpu);  
```  
  
### <a name="return-value"></a>Valore restituito  
 Per l'operatore prefisso, il `extent` oggetto (`*this`). Per l'operatore di suffisso, un nuovo `extent` oggetto.  
  
##  <a name="operator_div_eq"></a> operatore / = 

Divide ogni elemento nell'oggetto 'extent' per il numero specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```  
extent<_Rank>& operator/=(int _Rhs) restrict(amp,cpu);  
```  
  
### <a name="parameters"></a>Parametri  
 `_Rhs`  
 Il numero per cui dividere.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `extent`.  
  
##  <a name="operator_min_eq"></a> operatore = 

Sottrae il numero specificato da ogni elemento dell'oggetto 'extent'.  
  
### <a name="syntax"></a>Sintassi  
  
```  
extent<_Rank>& operator-=(const extent<_Rank>& _Rhs) restrict(amp,cpu);    
extent<_Rank>& operator-=(const index<_Rank>& _Rhs) restrict(amp,cpu);    
extent<_Rank>& operator-=(int _Rhs) restrict(amp,cpu);  
```  
  
### <a name="parameters"></a>Parametri  
 `_Rhs`  
 Il numero da sottrarre.  
  
### <a name="return-value"></a>Valore restituito  
 L'oggetto `extent` risultante.  
  
##  <a name="operator_eq"></a> operator= 

Copia il contenuto di un altro oggetto 'extent' in questo profilo.  
  
### <a name="syntax"></a>Sintassi  
  
```  
extent<_Rank>& operator=(const extent<_Rank>& _Other) restrict(amp,cpu);  
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `extent` oggetto da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a questo `extent` oggetto.  
  
##  <a name="operator_at"></a> operatore extent:: \[\] 
Restituisce l'elemento in corrispondenza dell'indice specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```  
int operator[](unsigned int _Index) const restrict(amp,cpu);    
int& operator[](unsigned int _Index) restrict(amp,cpu);  
```  
  
### <a name="parameters"></a>Parametri  
 `_Index`  
 Numero intero compreso tra 0 e il numero di dimensioni meno 1.  
  
### <a name="return-value"></a>Valore restituito  
 L'elemento in corrispondenza dell'indice specificato.  
  
##  <a name="rank_constant"></a> Numero di dimensioni 

Archivia il numero di dimensioni dell'oggetto 'extent'.  
  
### <a name="syntax"></a>Sintassi  
  
```  
static const int rank = _Rank;  
```  
  
##  <a name="size"></a> Dimensioni 

Restituisce la dimensione totale lineare del `extent` oggetto (in unità di elementi).  
  
### <a name="syntax"></a>Sintassi  

```  
unsigned int size() const restrict(amp,cpu);  
```  
  
## <a name="tile"></a> riquadro 

Produce un oggetto tiled_extent con le dimensioni del riquadro specificato.

```
template <int _Dim0>
tiled_extent<_Dim0> tile() const ;

template <int _Dim0, int _Dim1>
tiled_extent<_Dim0, _Dim1> tile() const ;

template <int _Dim0, int _Dim1, int _Dim2>
tiled_extent<_Dim0, _Dim1, _Dim2> tile() const ;
```  
### <a name="parameters"></a>Parametri
`_Dim0` Il componente più significativo dell'extent affiancato.
`_Dim1` Il componente successivo-a-più significativo dell'extent affiancato.
`_Dim2` Il componente meno significativo dell'extent affiancato.


  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
