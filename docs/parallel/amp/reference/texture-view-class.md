---
title: Classe texture_view | Documenti Microsoft
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
ms.openlocfilehash: 3db02d9cafb87c0f173546687ad01390e09b9f68
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="textureview-class"></a>Classe texture_view
Fornisce accesso in lettura e scrittura su una trama. `texture_view` può essere utilizzato solo per leggere le trame con tipo di valore `int`, `unsigned int`, o `float` con bpse 32-bit predefinito. Per leggere altri formati di trama, utilizzare `texture_view<const value_type, _Rank>`.  
  
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
 `value_type`  
 Tipo degli elementi nella funzione di aggregazione di trama.  
  
 `_Rank`  
 Il rango di `texture_view`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`value_type`|Tipo degli elementi nelle aggregazioni trama.|  
|`coordinates_type`|Il tipo della coordinata utilizzato per specificare un texel nel `texture_view`, vale a dire un `short_vector` che hanno lo stesso rango come trama associato è un tipo di valore `float`.|  
|`gather_return_type`|Il tipo restituito utilizzato per raccogliere le operazioni, vale a dire, una classificazione 4 `short_vector` che contiene i quattro componenti di colore omogeneo raccolti dai quattro valori texel campionati.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore texture_view](#ctor)|Di overload. Costruisce un `texture_view` istanza.|  
|[~ Distruttore texture_view](#ctor)|Elimina definitivamente il `texture_view` istanza.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[gather_alpha](#gather_alpha)|Di overload. Esempi di trama in corrispondenza delle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti alfa (w) delle quattro texel campionati.|  
|[gather_blue](#gather_blue)|Di overload. Esempi di trama in corrispondenza delle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti di blu (z) delle quattro texel campionati.|  
|[gather_green](#gather_green)|Di overload. Campioni di trama in corrispondenza delle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti di colore verde (y) delle quattro texel campionati.|  
|[gather_red](#gather_red)|Di overload. Esempi di trama in corrispondenza delle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti rosso (x) dei quattro texel campionati.|  
|[get](#get)|Di overload. Ottiene il valore dell'elemento in base all'indice.|  
|[sample](#sample)|Di overload. Esempi di trama a livello di dettaglio di coordinate specificate e utilizzando la configurazione di campionamento specificata.|  
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
 **Intestazione:** amp_graphics.h  
  
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
 `_Src`  
 [1, 2] Costruttore  
 Il `texture` in cui lo scrivibile `texture_view` viene creato.  
  
 [3, 4] Costruttore  
 Il `texture` in cui il non scrivibile `texture_view` viene creato.  
  
 `_Other`  
 [5] costruttore di copia  
 L'origine scrivibile `texture_view`.  
  
 [6, 7] Costruttore di copia  
 L'origine non è possibile scrivere `texture_view`.  
  
 `_Mipmap_level`  
 Il livello di mipmap specifico nell'origine `texture` che questo scrivibile `texture_view` associa a. Il valore predefinito è 0, che rappresenta il livello mip di livello superiore (più dettagliato).  
  
 `_Most_detailed_mip`  
 Primo livello mip di livello (più dettagliato) per la visualizzazione, relativo specificato `texture_view` oggetto.  
  
 `_Mip_levels`  
 Il numero di livelli di mipmap accessibili tramite il `texture_view`.  
  
##  <a name="gather_red"></a> gather_red 

 Esempi di trama in corrispondenza delle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti rosso (x) dei quattro texel campionati.  
  
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
 `_Address_mode`  
 La modalità di indirizzo da utilizzare per l'esempio di `texture_view`. La modalità di indirizzamento è uguale per tutte le dimensioni.  
  
 `_Sampler`  
 La configurazione di prova da utilizzare per l'esempio di `texture_view`.  
  
 `_Coord`  
 Le coordinate per eseguire l'esempio di. Per interpolare tra texel di esempio vengono utilizzati i valori frazionari.  
  
### <a name="return-value"></a>Valore restituito  
 Uno short vector 4 dimensioni contenente il componente rosso (x) di 4 campionati i valori di texel.  
  
##  <a name="gather_green"></a> gather_green 

 Campioni di trama in corrispondenza delle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti di colore verde (y) delle quattro texel campionati.  
  
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
 `_Address_mode`  
 La modalità di indirizzo da utilizzare per l'esempio di `texture_view`. La modalità di indirizzamento è uguale per tutte le dimensioni.  
  
 `_Sampler`  
 La configurazione di prova da utilizzare per l'esempio di `texture_view`.  
  
 `_Coord`  
 Le coordinate per eseguire l'esempio di. Per interpolare tra texel di esempio vengono utilizzati i valori frazionari.  
  
### <a name="return-value"></a>Valore restituito  
 Uno short vector 4 dimensioni contenente il componente verde (y) di 4 campionati i valori di texel.  
  
##  <a name="gather_blue"></a> gather_blue 

 Esempi di trama in corrispondenza delle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti di blu (z) delle quattro texel campionati.  
  
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
 `_Address_mode`  
 La modalità di indirizzo da utilizzare per l'esempio di `texture_view`. La modalità di indirizzamento è uguale per tutte le dimensioni.  
  
 `_Sampler`  
 La configurazione di prova da utilizzare per l'esempio di `texture_view`.  
  
 `_Coord`  
 Le coordinate per eseguire l'esempio di. Per interpolare tra texel di esempio vengono utilizzati i valori frazionari.  
  
### <a name="return-value"></a>Valore restituito  
 Uno short vector 4 dimensioni contenente il componente rosso (x) di 4 campionati i valori di texel.  
  
##  <a name="gather_alpha"></a> gather_alpha 

 Esempi di trama in corrispondenza delle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti alfa (w) delle quattro texel campionati.  
  
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
 `_Address_mode`  
 La modalità di indirizzo da utilizzare per l'esempio di `texture_view`. La modalità di indirizzamento è uguale per tutte le dimensioni.  
  
 `_Sampler`  
 La configurazione di prova da utilizzare per l'esempio di `texture_view`.  
  
 `_Coord`  
 Le coordinate per eseguire l'esempio di. Per interpolare tra texel di esempio vengono utilizzati i valori frazionari.  
  
### <a name="return-value"></a>Valore restituito  
 Una classificazione 4 breve vettore che contiene il valore alfa (w) componente di 4 campionati i valori di texel.  
  
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
 `_Index`  
 Indice dell'elemento da ottenere, possibilmente multidimensionali.  
  
 `_Mip_level`  
 Il livello di mipmap dovremmo da cui ottenere il valore. Il valore predefinito 0 rappresenta il livello di mipmap più dettagliato.  
  
### <a name="return-value"></a>Valore restituito  
 Valore dell'elemento.  
  
##  <a name="operator_eq"></a> operator= 

 Assegna una vista della trama stessa specificato `texture_view` a questo `texture_view` istanza.  
  
```  
texture_view<value_type, _Rank>& operator= (// [1] copy constructor  
    const texture_view<value_type, _Rank>& _Other) restrict(amp, cpu);

 
texture_view<const value_type, _Rank>& operator= (// [2] copy constructor  
    const texture_view<value_type, _Rank>& _Other) restrict(cpu);

 
texture_view<const value_type, _Rank>& operator= (// [3] copy constructor  
    const texture_view<const value_type, _Rank>& _Other) restrict(amp, cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 [1, 2] Costruttore di copia  
 Scrivibile `texture_view` oggetto.  
  
 [3] costruttore di copia  
 Classe non modificabile `texture_view` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a questo `texture_view` istanza.  
  
##  <a name="operator_at"></a> operator] 

 Restituisce il valore dell'elemento all'indice.  
  
```  
const value_type operator[] (const index<_Rank>& _Index) const restrict(amp);

 
const value_type operator[] (int _I0) const restrict(amp);

 
value_type operator[] (const index<_Rank>& _Index) const restrict(amp);

 
value_type operator[] (int _I0) const restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_Index`  
 L'indice, possibilmente multidimensionale.  
  
 `_I0`  
 L'indice unidimensionale.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore dell'elemento indicizzato da `_Index`.  
  
##  <a name="operator_call"></a> operator) 

 Restituisce il valore dell'elemento all'indice.  
  
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
 `_Index`  
 L'indice, possibilmente multidimensionale.  
  
 `_I0`  
 Il componente più significativo dell'indice.  
  
 `_I1`  
 Il componente successivo-a-più significativo dell'indice.  
  
 `_I2`  
 Il componente meno significativo dell'indice.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore dell'elemento indicizzato da `_Index`.  
  
##  <a name="sample"></a> Esempio 

 Esempi di trama a livello di dettaglio di coordinate specificate e utilizzando la configurazione di campionamento specificata.  
  
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
 `_Filter_mode`  
 La modalità di filtraggio da utilizzare per il texture_view di esempio. La modalità di filtro è lo stesso per la riduzione al minimo, maximization e i filtri di mipmap.  
  
 `_Address_mode`  
 La modalità di indirizzo da utilizzare per il texture_view di esempio. La modalità di indirizzamento è uguale per tutte le dimensioni.  
  
 `_Sampler`  
 La configurazione del campionatore da utilizzare per il texture_view di esempio.  
  
 `_Coord`  
 Le coordinate per eseguire l'esempio di. I valori delle coordinate frazionari vengono utilizzati per interpolare tra i valori di texel.  
  
 `_Level_of_detail`  
 Il valore specifica il livello di mipmap di esempio. Utilizzare valori frazionari vengono utilizzati per l'interpolazione tra due livelli di mipmap. Il livello di dettaglio predefinito è 0, che rappresenta il livello di mipmap più dettagliato.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore interpolato di esempio.  
  
##  <a name="set"></a> Set 

 Imposta il valore dell'elemento in corrispondenza dell'indice specificato sul valore specificato.  
  
```  
void set(
    const index<_Rank>& _Index,  
    const value_type& value) const restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_Index`  
 Indice dell'elemento da impostare, possibilmente multidimensionali.  
  
 `value`  
 Il valore su cui impostare l'elemento.  
  
##  <a name="value_type"></a> value_type 

 Il tipo di valore degli elementi del texture_view.  
  
```  
typedef typename const value_type value_type;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)
