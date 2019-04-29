---
title: Funzioni dello spazio dei nomi Concurrency::Graphics::Direct3D
ms.date: 11/04/2016
f1_keywords:
- amp_graphics/Concurrency::graphics::direct3d::get_sampler
- amp_graphics/Concurrency::graphics::direct3d::make_sampler
- amp_graphics/Concurrency::graphics::direct3d::make_texture
ms.assetid: 11ee1d42-333e-4ae9-95ac-4cf68c06d13d
ms.openlocfilehash: 18fb409b033ea14c3a140ea6600fc43cf3a8d603
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62405547"
---
# <a name="concurrencygraphicsdirect3d-namespace-functions"></a>Funzioni dello spazio dei nomi Concurrency::Graphics::Direct3D

||||
|-|-|-|
|[get_sampler](#get_sampler)|[get_texture](#get_texture)|[make_sampler](#make_sampler)|
|[make_texture](#make_texture)|[msad4](#msad4)|

##  <a name="get_sampler"></a>  get_sampler

Ottenere l'interfaccia dello stato campionatore D3D dell'acceleratore fornita visualizzazione che rappresenta l'oggetto campionatore specificato.

```
IUnknown* get_sampler(
    const Concurrency::accelerator_view& _Av,
    const sampler& _Sampler) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Av*<br/>
Una visualizzazione di tasti di scelta rapida D3D sul quale è possibile creare lo stato del campionatore D3D.

*_Sampler*<br/>
Oggetto campionatore per il quale viene creato l'interfaccia dello stato campionatore D3D sottostante.

### <a name="return-value"></a>Valore restituito

Puntatore a interfaccia IUnknown corrispondente allo stato campionatore D3D che rappresenta il campionatore specificato.

##  <a name="get_texture"></a>  get_texture

Ottiene l'interfaccia di trama Direct3D sottostante l'oggetto specificato [trama](texture-class.md) oggetto.

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

*value_type*<br/>
Il tipo di elemento della trama.

*_Rank*<br/>
Numero di dimensioni della trama.

*_Texture*<br/>
Una trama o visualizzazione di trama associato ad accelerator_view per il quale viene restituito l'interfaccia di trama Direct3D sottostante.

### <a name="return-value"></a>Valore restituito

Puntatore a interfaccia IUnknown corrispondente alla trama Direct3D sottostante alla trama.

##  <a name="make_sampler"></a>  make_sampler

Creare un campionatore da un puntatore a interfaccia dello stato campionatore D3D.

```
sampler make_sampler(_In_ IUnknown* _D3D_sampler) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_D3D_sampler*<br/>
Puntatore a interfaccia IUnknown dello stato campionatore D3D a creare il campionatore.

### <a name="return-value"></a>Valore restituito

Un campionatore rappresenta lo stato del campionatore D3D fornito.

##  <a name="make_texture"></a>  make_texture

Crea una [trama](texture-class.md) oggetto utilizzando i parametri specificati.

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

*value_type*<br/>
Il tipo degli elementi nella trama.

*_Rank*<br/>
Numero di dimensioni della trama.

*_Av*<br/>
Una visualizzazione di tasti di scelta rapida D3D sul quale è possibile creare la trama.

*_D3D_texture*<br/>
Puntatore a interfaccia IUnknown della trama D3D per creare la trama.

*_View_format*<br/>
Formato DXGI da utilizzare per le visualizzazioni create da questa trama. Passare DXGI_FORMAT_UNKNOWN (impostazione predefinita) per derivare il formato dal formato sottostante di _D3D_texture e value_type di questo modello. Il formato fornito deve essere compatibile con il formato sottostante di _D3D_texture.

### <a name="return-value"></a>Valore restituito

Una trama utilizzando la trama D3D fornita.

##  <a name="msad4"></a>  msad4

Confronta un valore di riferimento di 4 byte e un valore di origine di 8 byte e accumula un vettore di 4 somme. Ogni somma corrisponde alla somma mascherata delle differenze assolute degli allineamenti di byte diversi tra il valore di riferimento e il valore di origine.

```
inline uint4 msad4(
    uint _Reference,
    uint2 _Source,
    uint4 _Accum) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Reference*<br/>
La matrice di riferimento di 4 byte in un valore uint

*_Source*<br/>
Matrice di origine di 8 byte in un vettore di due valori uint.

*_Accum*<br/>
Vettore di 4 valori da aggiungere alla somma mascherata delle differenze assolute degli allineamenti di byte diversi tra il valore di riferimento e il valore di origine.

### <a name="return-value"></a>Valore restituito

Restituisce un vettore di 4 somme. Ogni somma corrisponde alla somma mascherata delle differenze assolute degli allineamenti di byte diversi tra il valore di riferimento e il valore di origine.

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_graphics. h

**Spazio dei nomi:** Concurrency::Graphics::Direct3D

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency::graphics::direct3d](concurrency-graphics-direct3d-namespace.md)
