---
description: 'Altre informazioni su: typeName'
title: typename
ms.date: 11/04/2016
f1_keywords:
- typename_cpp
helpviewer_keywords:
- typename template specifier
ms.assetid: 52e1d901-220d-4f0d-ab43-dae7e05fb491
ms.openlocfilehash: 3bc1385412d23d947c75967c2dc79bee78bbcd28
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97145795"
---
# <a name="typename"></a>typename

Nelle definizioni di modello, fornisce un suggerimento al compilatore che un identificatore sconosciuto è un tipo. Negli elenchi di parametri di modello, viene usato per specificare un parametro di tipo.

## <a name="syntax"></a>Sintassi

```
typename identifier;
```

## <a name="remarks"></a>Osservazioni

Questa parola chiave deve essere usata se un nome in una definizione di modello è un nome completo che dipende da un argomento di modello; è facoltativo se il nome completo non è dipendente. Per altre informazioni, vedere [modelli e risoluzione dei nomi](../cpp/templates-and-name-resolution.md).

**`typename`** può essere usato da qualsiasi tipo in qualsiasi posizione in una dichiarazione o definizione di modello. Non è consentita nell'elenco di classi base, a meno che non sia un argomento di modello in una classe base del modello.

```cpp
template <class T>
class C1 : typename T::InnerType // Error - typename not allowed.
{};
template <class T>
class C2 : A<typename T::InnerType>  // typename OK.
{};
```

La **`typename`** parola chiave può essere usata anche al posto di **`class`** negli elenchi di parametri di modello. Ad esempio, le istruzioni seguenti sono semanticamente equivalenti:

```cpp
template<class T1, class T2>...
template<typename T1, typename T2>...
```

## <a name="example"></a>Esempio

```cpp
// typename.cpp
template<class T> class X
{
   typename T::Y m_y;   // treat Y as a type
};

int main()
{
}
```

## <a name="see-also"></a>Vedere anche

[Modelli](../cpp/templates-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
