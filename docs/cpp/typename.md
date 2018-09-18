---
title: TypeName | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- typename_cpp
dev_langs:
- C++
helpviewer_keywords:
- typename template specifier
ms.assetid: 52e1d901-220d-4f0d-ab43-dae7e05fb491
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 77e3cc6f9691cf071a420ee2659c713f9e28036f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46061591"
---
# <a name="typename"></a>typename

Nelle definizioni di modello, fornisce un suggerimento al compilatore che un identificatore sconosciuto è un tipo. Nell'elenco di parametri di modello, viene utilizzato per specificare un parametro di tipo.

## <a name="syntax"></a>Sintassi

```
typename identifier;
```

## <a name="remarks"></a>Note

Questa parola chiave deve essere usata se un nome nella definizione di un modello è un nome completo che dipende da un argomento del modello. è facoltativo se il nome completo non è dipendente. Per altre informazioni, vedere [modelli e risoluzione dei nomi](../cpp/templates-and-name-resolution.md).

**TypeName** può essere usato da qualsiasi tipo in un punto qualsiasi in una definizione o dichiarazione di modello. Non è consentita nell'elenco di classi base, a meno che non sia un argomento di modello in una classe base del modello.

```cpp
template <class T>
class C1 : typename T::InnerType // Error - typename not allowed.
{};
template <class T>
class C2 : A<typename T::InnerType>  // typename OK.
{};
```

Il **nomeTipo** parola chiave è anche utilizzabile al posto di **classe** negli elenchi di parametri di modello. Ad esempio, le istruzioni seguenti sono semanticamente equivalenti:

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