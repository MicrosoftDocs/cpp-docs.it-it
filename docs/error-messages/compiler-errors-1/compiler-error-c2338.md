---
title: Errore del compilatore C2338
ms.date: 11/04/2016
f1_keywords:
- C2338
helpviewer_keywords:
- C2338
ms.assetid: 49bba575-1de4-4963-86c6-ce3226a2ba51
ms.openlocfilehash: 2a76ecaf78b117b0c1acabd9fcd50c9ae0f73b98
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62188296"
---
# <a name="compiler-error-c2338"></a>Errore del compilatore C2338

> *messaggio di errore*

Questo errore può essere causato da un `static_assert` errore durante la compilazione. Il messaggio viene fornito dal `static_assert` parametri.

Questo messaggio di errore può anche essere generato da provider esterni al compilatore. Nella maggior parte dei casi, questi errori vengono segnalati da un provider di attributi DLL, ad esempio ATLPROV. Alcuni moduli comuni di questo messaggio includono:

- «*attributo*' Provider di attributi Atl: errore ATL*numero* *messaggio*

- Utilizzo non corretto dell'attributo '*attributo*'

- «*utilizzo*': formato non corretto per l'attributo 'usage'

Questi errori spesso sono irreversibili e possono essere seguiti da un errore irreversibile del compilatore.

Per risolvere questi problemi, correggere l'utilizzo dell'attributo. Ad esempio, in alcuni casi, i parametri di attributo devono essere dichiarati prima di poter essere usati. Se viene fornito un numero di errore ATL, vedere la documentazione per tale errore per informazioni più specifiche.
