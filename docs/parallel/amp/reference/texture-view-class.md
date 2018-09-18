---
title: Classe texture_view | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-amp
ms.topic: reference
f1_keywords:
- texture_view
- AMP_GRAPHICS/texture_view
- AMP_GRAPHICS/Concurrency::graphics::texture_view::texture_view
- AMP_GRAPHICS/Concurrency::graphics::texture_view::gather_alpha
- AMP_GRAPHICS/Concurrency::graphics::texture_view::gather_blue
- AMP_GRAPHICS/Concurrency::graphics::texture_view::gather_green
- AMP_GRAPHICS/Concurrency::graphics::texture_view::gather_red
- AMP_GRAPHICS/Concurrency::graphics::texture_view::get
- AMP_GRAPHICS/Concurrency::graphics::texture_view::sample
- AMP_GRAPHICS/Concurrency::graphics::texture_view::set
- AMP_GRAPHICS/Concurrency::graphics::texture_view::value_type
dev_langs:
- C++
ms.assetid: 6ec2e289-1626-4727-9592-07981cf1d27d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 03684d287072e6c27fa06343ff498bbc62d4449a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46027076"
---
# <a name="textureview-class"></a>Classe texture_view
Fornisce l'accesso in lettura e accesso in scrittura a una trama. `texture_view` può essere utilizzato solo per leggere le trame il cui tipo di valore è `int`, `unsigned int`, o `float` con bpse 32 bit predefinite. Per leggere altri formati di trama, utilizzare `texture_view<const value_type, _Rank>`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename value_type,int _Rank>  
class texture_view;  
 
template<typename value_type, int _Rank>  
class texture_view 
   : public details::_Texture_base<value_type, _Rank>;  
 
template<typename value_type, int _Rank>  
class texture_view<const value_type, _Rank> 
   : public details::_Texture_base<value_type, _Rank>;  
```  
  
#### <a name="parameters"></a>Parametri  
*value_type*<br/>
Il tipo degli elementi nell'aggregato della trama.  
  
*_Rank*<br/>
Il rango del `texture_view`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`value_type`|Il tipo degli elementi negli aggregati della trama.|  
|`coordinates_type`|Il tipo della coordinata utilizzata per specificare un texel nel `texture_view`, vale a dire, una `short_vector` che hanno lo stesso rango della trama associata con un tipo di valore `float`.|  
|`gather_return_type`|Il tipo restituito utilizzato per riunire le operazioni, vale a dire, una classificazione 4 `short_vector` che contiene i quattro componenti di colore omogenee raccolte dai quattro valori di texel campionati.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore texture_view](#ctor)|Di overload. Costruisce un `texture_view` istanza.|  
|[~ texture_view distruttore](#ctor)|Elimina definitivamente il `texture_view` istanza.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[gather_alpha](#gather_alpha)|Di overload. Il campionamento della trama alle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti alfa (w) dei quattro texel campionati.|  
|[gather_blue](#gather_blue)|Di overload. Il campionamento della trama alle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti blu (z) dei quattro texel campionati.|  
|[gather_green](#gather_green)|Di overload. Il campionamento della trama alle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti di colore verde (y) dei quattro texel campionati.|  
|[gather_red](#gather_red)|Di overload. Il campionamento della trama alle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti rosso (x) dei quattro texel campionati.|  
|[get](#get)|Di overload. Ottiene il valore dell'elemento in base all'indice.|  
|[sample](#sample)|Di overload. Campionamento della trama alle coordinate e a livello di dettaglio usando la configurazione di campionamento specificato.|  
|[set](#set)|Imposta il valore di un elemento in base all'indice.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operator()](#operator_call)|Di overload. Ottiene il valore dell'elemento in base all'indice.|  
|[operator]](#operator_at)|Di overload. Ottiene il valore dell'elemento in base all'indice.|  
|[operator=](#operator_eq)|Di overload. Operatore di assegnazione.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[value_type](#value_type)|Il tipo di valore degli elementi del `texture_view`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `_Texture_base`  
  
 `texture_view`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp_graphics. h  
  
 **Namespace:** Concurrency:: Graphics  
  
##  <a name="dtor"></a> ~ texture_view 

 Elimina definitivamente il `texture_view` istanza.  
  
```  
~texture_view() restrict(amp, cpu);
```  
  
##  <a name="ctor"></a> texture_view 

 Costruisce un `texture_view` istanza.  
  
```  
texture_view(// [1] constructor  
    texture<value_type, _Rank>& _Src) restrict(amp);

 
texture_view(// [2] constructor  
    texture<value_type, _Rank>& _Src,  
    unsigned int _Mipmap_level = 0) restrict(cpu);

 
texture_view(// [3] constructor  
    const texture<value_type, _Rank>& _Src) restrict(amp);

 
texture_view(// [4] constructor  
    const texture<value_type, _Rank>& _Src,  
    unsigned int _Most_detailed_mip,  
    unsigned int _Mip_levels) restrict(cpu);

 
texture_view(// [5] copy constructor  
    const texture_view<value_type, _Rank>& _Other) restrict(amp, cpu);

 
texture_view(// [6] copy constructor  
    const texture_view<const value_type, _Rank>& _Other) restrict(amp, cpu);

 
texture_view(// [7] copy constructor  
    const texture_view<const value_type, _Rank>& _Other,  
    unsigned int _Most_detailed_mip,  
    unsigned int _Mip_levels) restrict(cpu);
```  
  
### <a name="parameters"></a>Parametri  
*_Src*<br/>
[1, 2] Costruttore  
 Il `texture` in cui scrivibile `texture_view` viene creato.  
  
 [3, 4] Costruttore  
 Il `texture` in cui non scrivibile `texture_view` viene creato.  
  
*_Other*<br/>
[5] costruttore della copia  
 Modificabile di origine `texture_view`.  
  
 [6, 7] Costruttore di copia  
 L'origine non scrivibile `texture_view`.  
  
*_Mipmap_level*<br/>
Il livello di mipmap specifico sull'origine `texture` scrivibile che questo `texture_view` associa. Il valore predefinito è 0, che rappresenta il livello mip di livello più alto (più dettagliato).  
  
*_Most_detailed_mip*<br/>
In alto (più dettagliato) livello mip per la visualizzazione, relativo specificato `texture_view` oggetto.  
  
*_Mip_levels*<br/>
Il numero di livelli di mipmap accessibili tramite il `texture_view`.  
  
##  <a name="gather_red"></a> gather_red 

 Il campionamento della trama alle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti rosso (x) dei quattro texel campionati.  
  
```  
const gather_return_type gather_red(
    const sampler& _Sampler,  
    const coordinates_type& _Coord) const restrict(amp);

 
template<
    address_mode _Address_mode = address_clamp  
>  
const gather_return_type gather_red(
    const coordinates_type& _Coord) const restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
*_Address_mode*<br/>
La modalità di indirizzo da utilizzare per l'esempio di `texture_view`. La modalità di indirizzo è lo stesso per tutte le dimensioni.  
  
*_Sampler*<br/>
Configurazione del campionatore da utilizzare per l'esempio di `texture_view`.  
  
*_Coord*<br/>
Le coordinate da cui prelevare il campione. Valori di coordinate frazionari vengono utilizzati per interpolare tra texel di esempio.  
  
### <a name="return-value"></a>Valore restituito  
 Un breve vettore di priorità 4 che contiene il componente rosso (x) di 4 valori texel campionati.  
  
##  <a name="gather_green"></a> gather_green 

 Il campionamento della trama alle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti di colore verde (y) dei quattro texel campionati.  
  
```  
const gather_return_type gather_green(
    const sampler& _Sampler,  
    const coordinates_type& _Coord) const restrict(amp);

 
template<
    address_mode _Address_mode = address_clamp  
>  
const gather_return_type gather_green(
    const coordinates_type& _Coord) const restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
*_Address_mode*<br/>
La modalità di indirizzo da utilizzare per l'esempio di `texture_view`. La modalità di indirizzo è lo stesso per tutte le dimensioni.  
  
*_Sampler*<br/>
Configurazione del campionatore da utilizzare per l'esempio di `texture_view`.  
  
*_Coord*<br/>
Le coordinate da cui prelevare il campione. Valori di coordinate frazionari vengono utilizzati per interpolare tra texel di esempio.  
  
### <a name="return-value"></a>Valore restituito  
 Un breve vettore di priorità 4 che contiene il componente verde (y) di 4 valori texel campionati.  
  
##  <a name="gather_blue"></a> gather_blue 

 Il campionamento della trama alle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti blu (z) dei quattro texel campionati.  
  
```  
const gather_return_type gather_blue(
    const sampler& _Sampler,  
    const coordinates_type& _Coord) const restrict(amp);

 
template<
    address_mode _Address_mode = address_clamp  
>  
const gather_return_type gather_blue(
    const coordinates_type& _Coord) const restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
*_Address_mode*<br/>
La modalità di indirizzo da utilizzare per l'esempio di `texture_view`. La modalità di indirizzo è lo stesso per tutte le dimensioni.  
  
*_Sampler*<br/>
Configurazione del campionatore da utilizzare per l'esempio di `texture_view`.  
  
*_Coord*<br/>
Le coordinate da cui prelevare il campione. Valori di coordinate frazionari vengono utilizzati per interpolare tra texel di esempio.  
  
### <a name="return-value"></a>Valore restituito  
 Un breve vettore di priorità 4 che contiene il componente rosso (x) di 4 valori texel campionati.  
  
##  <a name="gather_alpha"></a> gather_alpha 

 Il campionamento della trama alle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti alfa (w) dei quattro texel campionati.  
  
```  
const gather_return_type gather_alpha(
    const sampler& _Sampler,  
    const coordinates_type& _Coord) const restrict(amp);

 
template<
    address_mode _Address_mode = address_clamp  
>  
const gather_return_type gather_alpha(
    const coordinates_type& _Coord) const restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
*_Address_mode*<br/>
La modalità di indirizzo da utilizzare per l'esempio di `texture_view`. La modalità di indirizzo è lo stesso per tutte le dimensioni.  
  
*_Sampler*<br/>
Configurazione del campionatore da utilizzare per l'esempio di `texture_view`.  
  
*_Coord*<br/>
Le coordinate da cui prelevare il campione. Valori di coordinate frazionari vengono utilizzati per interpolare tra texel di esempio.  
  
### <a name="return-value"></a>Valore restituito  
 Priorità 4 breve vettore che contiene il valore alfa (w) componente di 4 valori texel campionati.  
  
##  <a name="get"></a> get 

 Ottiene il valore dell'elemento in corrispondenza dell'indice specificato.  
  
```  
const value_type get(
    const index<_Rank>& _Index) const restrict(amp);

 
value_type get(
    const index<_Rank>& _Index,  
    unsigned int _Mip_level = 0) const restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
*Index*<br/>
Indice dell'elemento da ottenere, possibilmente multidimensionale.  
  
*_Mip_level*<br/>
Il livello di mipmap da cui si dovrebbe ottenere il valore. Il valore predefinito 0 rappresenta il livello di mipmap più dettagliato.  
  
### <a name="return-value"></a>Valore restituito  
 Valore dell'elemento.  
  
##  <a name="operator_eq"></a> operator= 

 Assegna una visualizzazione della stessa trama come specificato `texture_view` a questo `texture_view` istanza.  
  
```  
texture_view<value_type, _Rank>& operator= (// [1] copy constructor  
    const texture_view<value_type, _Rank>& _Other) restrict(amp, cpu);

 
texture_view<const value_type, _Rank>& operator= (// [2] copy constructor  
    const texture_view<value_type, _Rank>& _Other) restrict(cpu);

 
texture_view<const value_type, _Rank>& operator= (// [3] copy constructor  
    const texture_view<const value_type, _Rank>& _Other) restrict(amp, cpu);
```  
  
### <a name="parameters"></a>Parametri  
*_Other*<br/>
[1, 2] Costruttore di copia  
 Scrivibile `texture_view` oggetto.  
  
 [3] costruttore della copia  
 Non scrivibile `texture_view` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a questo `texture_view` istanza.  
  
##  <a name="operator_at"></a> operator] 

 Restituisce il valore dell'elemento in base all'indice.  
  
```  
const value_type operator[] (const index<_Rank>& _Index) const restrict(amp);

 
const value_type operator[] (int _I0) const restrict(amp);

 
value_type operator[] (const index<_Rank>& _Index) const restrict(amp);

 
value_type operator[] (int _I0) const restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
*Index*<br/>
L'indice, possibilmente multidimensionale.  
  
*_I0*<br/>
L'indice di matrice unidimensionale.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore dell'elemento indicizzato da `_Index`.  
  
##  <a name="operator_call"></a> operator) 

 Restituisce il valore dell'elemento in base all'indice.  
  
```  
const value_type operator() (
    const index<_Rank>& _Index) const restrict(amp);

 
const value_type operator() (
    int _I0) const restrict(amp);

 
const value_type operator() (
    int _I0,   int _I1) const restrict(amp);

 
const value_type operator() (
    int _I0,  
    int _I1,  
    int _I2) const restrict(amp);

 
value_type operator() (
    const index<_Rank>& _Index) const restrict(amp);

 
value_type operator() (
    int _I0) const restrict(amp);

 
value_type operator() (
    int _I0,  
    int _I1) const restrict(amp);

 
value_type operator() (
    int _I0,  
    int _I1,  
    int _I2) const restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
*Index*<br/>
L'indice, possibilmente multidimensionale.  
  
*_I0*<br/>
Il componente più significativo dell'indice.  
  
*_I1*<br/>
Il componente successivo-a-più significativo dell'indice.  
  
*_I2*<br/>
Il componente meno significativo dell'indice.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore dell'elemento indicizzato da `_Index`.  
  
##  <a name="sample"></a> Esempio 

 Campionamento della trama alle coordinate e a livello di dettaglio usando la configurazione di campionamento specificato.  
  
```  
value_type sample(
    const sampler& _Sampler,  
    const coordinates_type& _Coord,  
    float _Level_of_detail = 0.0f) const restrict(amp);

 
template<
    filter_mode _Filter_mode = filter_linear,  
    address_mode _Address_mode = address_clamp  
>  
value_type sample(
    const coordinates_type& _Coord,  
    float _Level_of_detail = 0.0f) const restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
*_Filter_mode*<br/>
La modalità di filtro da utilizzare per campionare texture_view. La modalità di filtro è lo stesso per la minimizzazione, massimizzazione e mipmap filtri.  
  
*_Address_mode*<br/>
La modalità di indirizzo da utilizzare per campionare texture_view. La modalità di indirizzo è lo stesso per tutte le dimensioni.  
  
*_Sampler*<br/>
Configurazione del campionatore da utilizzare per campionare texture_view.  
  
*_Coord*<br/>
Le coordinate da cui prelevare il campione. Valori di coordinate frazionari vengono utilizzati per interpolare tra i valori dei texel.  
  
*_Level_of_detail*<br/>
Il valore specifica il livello di mipmap da campionare. I valori frazionari vengono utilizzati per interpolare tra due livelli di mipmap. Il livello di dettaglio predefinito è 0, che rappresenta il livello mip più dettagliato.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore di esempio interpolato.  
  
##  <a name="set"></a> Set 

 Imposta il valore dell'elemento in corrispondenza dell'indice specificato sul valore specificato.  
  
```  
void set(
    const index<_Rank>& _Index,  
    const value_type& value) const restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
*Index*<br/>
Indice dell'elemento da impostare, possibilmente multidimensionale.  
  
*valore*<br/>
Valore da impostare l'elemento.  
  
##  <a name="value_type"></a> value_type 

 Il tipo di valore degli elementi della visualizzazione della trama.  
  
```  
typedef typename const value_type value_type;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)
