---
description: 'Altre informazioni su: errore del compilatore C2338'
title: Errore del compilatore C2338
ms.date: 11/04/2016
f1_keywords:
- C2338
helpviewer_keywords:
- C2338
ms.assetid: 49bba575-1de4-4963-86c6-ce3226a2ba51
ms.openlocfilehash: 7bbbc7fd6240fce2def470a0d16aa0dba152a109
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97234800"
---
# <a name="compiler-error-c2338"></a>Errore del compilatore C2338

> *Messaggio di errore*

Questo errore può essere causato da un **`static_assert`** errore durante la compilazione. Il messaggio viene fornito dai **`static_assert`** parametri.

Questo messaggio di errore può essere generato anche da provider esterni al compilatore. Nella maggior parte dei casi, questi errori vengono segnalati da una DLL del provider di attributi, ad esempio ATLPROV. Alcune forme comuni di questo messaggio includono:

- Provider di attributi ATL '*attribute*': errore *numero* ATL *messaggio*

- Utilizzo non corretto dell'attributo '*attribute*'

- '*Usage*': formato non corretto per l'attributo ' Usage '

Questi errori spesso sono irreversibili e possono essere seguiti da un errore irreversibile del compilatore.

Per risolvere questi problemi, correggere l'utilizzo dell'attributo. In alcuni casi, ad esempio, i parametri degli attributi devono essere dichiarati prima di poter essere utilizzati. Se viene fornito un numero di errore ATL, per informazioni più specifiche, consultare la documentazione relativa a tale errore.
