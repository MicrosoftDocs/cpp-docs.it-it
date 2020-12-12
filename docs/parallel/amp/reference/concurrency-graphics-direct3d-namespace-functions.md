---
description: 'Altre informazioni su: Concurrency:: graphics::d funzioni dello spazio dei nomi irect3d'
title: Funzioni dello spazio dei nomi Concurrency::graphics::direct3d
ms.date: 11/04/2016
f1_keywords:
- amp_graphics/Concurrency::graphics::direct3d::get_sampler
- amp_graphics/Concurrency::graphics::direct3d::make_sampler
- amp_graphics/Concurrency::graphics::direct3d::make_texture
ms.assetid: 11ee1d42-333e-4ae9-95ac-4cf68c06d13d
ms.openlocfilehash: 52556835c843744e03661b3ef5b718c884765c08
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97122356"
---
# <a name="concurrencygraphicsdirect3d-namespace-functions"></a>Funzioni dello spazio dei nomi Concurrency::graphics::direct3d

:::row:::
   :::column span="":::
      [`get_sampler`](#get_sampler)\
      [`get_texture`](#get_texture)
   :::column-end:::
   :::column span="":::
      [`make_sampler`](#make_sampler)
   :::column-end:::
   :::column span="":::
      [`make_texture`](#make_texture)
   :::column-end:::
   :::column span="":::
      [`msad4`](#msad4)
   :::column-end:::
:::row-end:::

## <a name="get_sampler"></a><a name="get_sampler"></a> get_sampler

Ottiene l'interfaccia dello stato del campionatore D3D sulla visualizzazione acceleratore specificata che rappresenta l'oggetto campionatore specificato.

```cpp
IUnknown* get_sampler(
    const Concurrency::accelerator_view& _Av,
    const sampler& _Sampler) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Av*<br/>
Visualizzazione acceleratore D3D in cui deve essere creato lo stato del campionatore D3D.

*_Sampler*<br/>
Oggetto Sampler per il quale viene creata l'interfaccia di stato del campionatore D3D sottostante.

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia IUnknown corrispondente allo stato del campionatore D3D che rappresenta il campionatore specificato.

## <a name="get_texture"></a><a name="get_texture"></a> get_texture

Ottiene l'interfaccia di trama Direct3D sottostante all'oggetto [texture](texture-class.md) specificato.

```cpp
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
Tipo di elemento della trama.

*_Rank*<br/>
Rango della trama.

*_Texture*<br/>
Trama o visualizzazione di trama associata al accelerator_view per cui viene restituita l'interfaccia di trama Direct3D sottostante.

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia IUnknown che corrisponde alla trama Direct3D sottostante alla trama.

## <a name="make_sampler"></a><a name="make_sampler"></a> make_sampler

Creare un campionatore da un puntatore all'interfaccia dello stato del campionatore D3D.

```cpp
sampler make_sampler(_In_ IUnknown* _D3D_sampler) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_D3D_sampler*<br/>
Puntatore all'interfaccia IUnknown dello stato del campionatore D3D da cui creare il campionatore.

### <a name="return-value"></a>Valore restituito

Un campionatore rappresenta lo stato del campionatore D3D fornito.

## <a name="make_texture"></a><a name="make_texture"></a> make_texture

Crea un oggetto [trama](texture-class.md) usando i parametri specificati.

```cpp
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
Tipo degli elementi nella trama.

*_Rank*<br/>
Rango della trama.

*_Av*<br/>
Visualizzazione acceleratore D3D in cui deve essere creata la trama.

*_D3D_texture*<br/>
Puntatore all'interfaccia IUnknown della trama D3D da cui creare la trama.

*_View_format*<br/>
Formato DXGI da usare per le visualizzazioni create da questa trama. Passare DXGI_FORMAT_UNKNOWN (impostazione predefinita) per derivare il formato dal formato sottostante di _D3D_texture e dalla value_type di questo modello. Il formato fornito deve essere compatibile con il formato sottostante di _D3D_texture.

### <a name="return-value"></a>Valore restituito

Trama che utilizza la trama D3D specificata.

## <a name="msad4"></a><a name="msad4"></a> msad4

Confronta un valore di riferimento di 4 byte e un valore di origine a 8 byte e accumula un vettore di 4 somme. Ogni somma corrisponde alla somma mascherata delle differenze assolute degli allineamenti di byte diversi tra il valore di riferimento e il valore di origine.

```cpp
inline uint4 msad4(
    uint _Reference,
    uint2 _Source,
    uint4 _Accum) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Reference*<br/>
Matrice di riferimento di 4 byte in un valore uint

*_Source*<br/>
Matrice di origine di 8 byte in un vettore di due valori uint.

*_Accum*<br/>
Vettore di 4 valori da aggiungere alla somma mascherata delle differenze assolute dei diversi allineamenti di byte tra il valore di riferimento e il valore di origine.

### <a name="return-value"></a>Valore restituito

Restituisce un vettore di 4 somme. Ogni somma corrisponde alla somma mascherata delle differenze assolute degli allineamenti di byte diversi tra il valore di riferimento e il valore di origine.

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_graphics. h

**Spazio dei nomi:** Concurrency:: graphics::d irect3d

## <a name="see-also"></a>Vedi anche

[Concurrency:: graphics::d spazio dei nomi irect3d](concurrency-graphics-direct3d-namespace.md)
