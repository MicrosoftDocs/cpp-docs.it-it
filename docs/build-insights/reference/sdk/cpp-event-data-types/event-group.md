---
title: Classe EventGroup
description: Riferimento alla classe EventGroup di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- EventGroup
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 57cbc7a053132909149aee182b9560e2ee33c161
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92923305"
---
# <a name="eventgroup-class"></a>Classe EventGroup

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

Il `EventGroup` modello di classe è la classe base per tutte le classi di acquisizione del gruppo.

## <a name="syntax"></a>Sintassi

```cpp
template <typename TActivity>
class EventGroup;
{
public:
    size_t Size() const;

    const TActivity& operator[](size_t index) const;
    const TActivity& Front() const;
    const TActivity& Back() const;

    std::deque<TActivity>::const_iterator begin() const;
    std::deque<TActivity>::const_iterator end() const;
};
```

### <a name="parameters"></a>Parametri

*TActivity* Tipo di attività contenuto nel gruppo.

## <a name="members"></a>Members

### <a name="functions"></a>Funzioni

[Indietro](#back) 
 [inizia](#begin) 
 [fine](#end) 
 In [primo piano](#front) 
 [operator []](#subscript-operator) 
 [Dimensioni](#size)

## <a name="back"></a><a name="back"></a> Indietro

```cpp
const TActivity& Back() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento all'ultimo evento dell'attività nel gruppo.

## <a name="begin"></a><a name="begin"></a> iniziare

```cpp
std::deque<TActivity>::const_iterator begin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore che punta all'inizio del gruppo di eventi di attività.

## <a name="end"></a><a name="end"></a> fine

```cpp
std::deque<TActivity>::const_iterator end() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore che punta a una posizione oltre la fine del gruppo di eventi di attività.

## <a name="front"></a><a name="front"></a> Fronte

```cpp
const TActivity& Front() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento al primo evento di attività nel gruppo.

## <a name="operator"></a><a name="subscript-operator"></a> operator []

```cpp
const TActivity& operator[](size_t index) const;
```

### <a name="parameters"></a>Parametri

*Indice*\
Indice dell'elemento a cui accedere nel gruppo di eventi di attività.

### <a name="return-value"></a>Valore restituito

Evento dello stack di eventi archiviato nella posizione indicata dall' *Indice* .

## <a name="size"></a>Dimensioni dell'<a name="size"></a>

```cpp
size_t Size() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni del gruppo di eventi.

::: moniker-end
