---
title: Classe EventGroup
description: Riferimento C++ alla classe EventGroup di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- EventGroup
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: ac8ac70f3fc160714b86dd0c483808a4d06e7699
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333433"
---
# <a name="eventgroup-class"></a>Classe EventGroup

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

Il modello di classe `EventGroup` è la classe di base per tutte le classi di acquisizione del gruppo.

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

[Back](#back)
[begin](#begin)
[end](#end)
[front](#front)
[operator []](#subscript-operator)
[size](#size)

## <a name="back"></a>Indietro

```cpp
const TActivity& Back() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento all'ultimo evento dell'attività nel gruppo.

## <a name="begin"></a>iniziare

```cpp
std::deque<TActivity>::const_iterator begin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore che punta all'inizio del gruppo di eventi di attività.

## <a name="end"></a>fine

```cpp
std::deque<TActivity>::const_iterator end() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore che punta a una posizione oltre la fine del gruppo di eventi di attività.

## <a name="front"></a>Fronte

```cpp
const TActivity& Front() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento al primo evento di attività nel gruppo.

## <a name="subscript-operator"></a>operator []

```cpp
const TActivity& operator[](size_t index) const;
```

### <a name="parameters"></a>Parametri

\ di *Indice*
Indice dell'elemento a cui accedere nel gruppo di eventi di attività.

### <a name="return-value"></a>Valore restituito

Evento dello stack di eventi archiviato nella posizione indicata dall' *Indice*.

## <a name="size"></a>Dimensioni

```cpp
size_t Size() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni del gruppo di eventi.

::: moniker-end
