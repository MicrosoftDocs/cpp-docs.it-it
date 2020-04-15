---
title: Classe EventGroup
description: Informazioni di riferimento per la classe EventGroup dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- EventGroup
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 596c18ca0e9b4d7b26c4ed5209b16871952c4af2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324992"
---
# <a name="eventgroup-class"></a>Classe EventGroup

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

Il `EventGroup` modello di classe è la classe base per tutte le classi di acquisizione di gruppo.

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

*TAttività* Tipo di attività contenuto nel gruppo.

## <a name="members"></a>Membri

### <a name="functions"></a>Funzioni

[Back](#back)
[begin](#begin)
[Front](#end)
[Front](#front)[Size](#size) [operator[]](#subscript-operator)
operator[] Dimensione


## <a name="back"></a><a name="back"></a>Indietro

```cpp
const TActivity& Back() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento all'ultimo evento di attività nel gruppo.

## <a name="begin"></a><a name="begin"></a>Iniziare

```cpp
std::deque<TActivity>::const_iterator begin() const;
```

### <a name="return-value"></a>Valore restituito

Un iteratore che punta all'inizio del gruppo di eventi di attività.

## <a name="end"></a><a name="end"></a>Fine

```cpp
std::deque<TActivity>::const_iterator end() const;
```

### <a name="return-value"></a>Valore restituito

Un iteratore che punta una posizione oltre la fine del gruppo di eventi di attività.

## <a name="front"></a><a name="front"></a>Fronte

```cpp
const TActivity& Front() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento al primo evento di attività nel gruppo.

## <a name="operator"></a><a name="subscript-operator"></a>operatore[]

```cpp
const TActivity& operator[](size_t index) const;
```

### <a name="parameters"></a>Parametri

*Indice*\
Indice dell'elemento a cui accedere nel gruppo di eventi di attività.

### <a name="return-value"></a>Valore restituito

Evento dallo stack di eventi archiviato nella posizione indicata *dall'indice.*

## <a name="size"></a>Dimensioni dell'<a name="size"></a>

```cpp
size_t Size() const;
```

### <a name="return-value"></a>Valore restituito

Dimensione del gruppo di eventi.

::: moniker-end
