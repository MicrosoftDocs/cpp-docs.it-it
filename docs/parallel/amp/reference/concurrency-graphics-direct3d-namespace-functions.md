---
title: Funzioni dello spazio dei nomi Concurrency::Graphics::Direct3D | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- amp_graphics/Concurrency::graphics::direct3d::get_sampler
- amp_graphics/Concurrency::graphics::direct3d::make_sampler
- amp_graphics/Concurrency::graphics::direct3d::make_texture
dev_langs:
- C++
ms.assetid: 11ee1d42-333e-4ae9-95ac-4cf68c06d13d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2ed95ed8df8a42dc62684c71a3005c2f33fecd18
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33686334"
---
# <a name="concurrencygraphicsdirect3d-namespace-functions"></a>Funzioni dello spazio dei nomi Concurrency::Graphics::Direct3D
||||  
|-|-|-|  
|[get_sampler](#get_sampler)|[get_texture](#get_texture)|[make_sampler](#make_sampler)|  
|[make_texture](#make_texture)|[msad4](#msad4)|  

 
##  <a name="get_sampler"></a>  get_sampler  
 Ottenere l'interfaccia di stato D3D campionatore specifico tasto di scelta rapida consente di visualizzare che rappresenta l'oggetto campionatore specificato.  
  
```  
IUnknown* get_sampler(
    const Concurrency::accelerator_view& _Av,  
    const sampler& _Sampler) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_Av`  
 Una vista D3D tasti di scelta rapida in cui si desidera creare lo stato del campionatore D3D.  
  
 `_Sampler`  
 Oggetto campionatore per cui viene creata l'interfaccia di stati del campionatore D3D sottostante.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a interfaccia IUnknown corrispondente allo stato D3D campionatore che rappresenta il campionatore specificato.  
  
##  <a name="get_texture"></a>  get_texture  
 Ottiene l'interfaccia di trama Direct3D sottostante specificato [trama](texture-class.md) oggetto.  
  
```  
template<
    typename value_type,  
    int _Rank  
>  
_Ret_ IUnknown *get_texture(
    const texture<value_type, _Rank>& _Texture) restrict(cpu);

 
template<
    typename value_type,  
    int _Rank  
>  
_Ret_ IUnknown *get_texture(
    const writeonly_texture_view<value_type, _Rank>& _Texture) restrict(cpu);

 
template<
    typename value_type,  
    int _Rank  
>  
_Ret_ IUnknown *get_texture(
    const texture_view<value_type, _Rank>& _Texture) restrict(cpu);

 
```  
  
### <a name="parameters"></a>Parametri  
 `value_type`  
 Il tipo di elemento della trama.  
  
 `_Rank`  
 Il numero di dimensioni della trama.  
  
 `_Texture`  
 Una trama o visualizzazione di trama associato il accelerator_view per il quale viene restituita l'interfaccia di trama Direct3D sottostante.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a interfaccia IUnknown corrispondente per la trama Direct3D sottostante la trama.  
  
##  <a name="make_sampler"></a>  make_sampler  
 Creare un campionatore da un puntatore a interfaccia D3D campionatore dello stato.  
  
```  
sampler make_sampler(_In_ IUnknown* _D3D_sampler) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_D3D_sampler`  
 Puntatore a interfaccia IUnknown dello stato D3D campionatore al campionatore da creare.  
  
### <a name="return-value"></a>Valore restituito  
 Un campionatore rappresenta lo stato del campionatore D3D fornito.  
  
##  <a name="make_texture"></a>  make_texture  
 Crea un [trama](texture-class.md) oggetto usando i parametri specificati.  
  
```  
template<
    typename value_type,  
    int _Rank  
>  
texture<value_type, _Rank> make_texture(
    const Concurrency::accelerator_view& _Av,  
    _In_ IUnknown* _D3D_texture,  
    DXGI_FORMAT _View_format = DXGI_FORMAT_UNKNOWN) restrict(cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `value_type`  
 Tipo degli elementi nella trama.  
  
 `_Rank`  
 Il numero di dimensioni della trama.  
  
 `_Av`  
 Una vista D3D tasti di scelta rapida in cui si desidera creare la trama.  
  
 `_D3D_texture`  
 Puntatore a interfaccia IUnknown della trama D3D per creare la trama da.  
  
 `_View_format`  
 Formato da utilizzare per le viste create da questo trama DXGI. Passare DXGI_FORMAT_UNKNOWN (predefinito) per il formato derivare il formato sottostante del _D3D_texture e value_type del modello. Il formato specificato deve essere compatibile con il formato di _D3D_texture sottostante.  
  
### <a name="return-value"></a>Valore restituito  
 Una trama utilizzando la trama D3D fornita.  
  
##  <a name="msad4"></a>  msad4  
 Confronta un valore di riferimento a 4 byte e un valore di origine a 8 byte e accumula un vettore di 4 somme. Ciascuna somma corrisponde alla somma mascherata delle differenze assolute di allineamenti diversi byte tra il valore di riferimento e il valore di origine.  
  
```  
inline uint4 msad4(
    uint _Reference,  
    uint2 _Source,  
    uint4 _Accum) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_Reference`  
 La matrice di riferimento di 4 byte in un valore uint  
  
 `_Source`  
 Matrice di origine di 8 byte in un vettore di due valori uint.  
  
 `_Accum`  
 Vettore di 4 valori da aggiungere alla somma mascherata delle differenze assolute dei allineamenti diversi byte tra il valore di riferimento e il valore di origine.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un vettore di 4 somme. Ciascuna somma corrisponde alla somma mascherata delle differenze assolute di allineamenti diversi byte tra il valore di riferimento e il valore di origine.  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp_graphics.h  
  
 **Namespace:** Concurrency::graphics::direct3d 

## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency::graphics::direct3d](concurrency-graphics-direct3d-namespace.md)
