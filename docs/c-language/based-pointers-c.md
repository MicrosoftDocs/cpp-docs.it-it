---
title: Puntatori based (C)
ms.date: 11/04/2016
helpviewer_keywords:
- __based keyword [C]
- based pointers
- pointers, based
- based addressing
ms.assetid: b5446920-89e0-4e2f-91f3-1f2a769a08e8
ms.openlocfilehash: e5d8c529adfb92c9db1fdcc5a38f688853606d5d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62327431"
---
# <a name="based-pointers-c"></a>Puntatori based (C)

**Specifico di Microsoft**

[__based (Riferimento C++)](../cpp/based-pointers-cpp.md)

Per i compilatori C a 32 e a 64 bit Microsoft un puntatore based è un offset a 32 o a 64 bit di una base puntatore a 32 o a 64 bit. L'indirizzamento di base è utile per esercitare controllo sulle sezioni in cui gli oggetti vengono allocati, è possibile quindi ridurre la dimensione del file eseguibile e aumentare la velocità di esecuzione. In genere, il formato per specificare un puntatore based è

> *dichiaratore* di *tipo* **__based (** *base* **)**

La variante "basato sul puntatore" dell'indirizzamento di base consente la specifica di un puntatore come base. Il puntatore based, quindi, è un offset nella sezione di memoria a partire dall'inizio del puntatore su cui si basa. I puntatori basati sugli indirizzi di puntatori sono l'unico formato della parola chiave `__based` valida in compilazioni a 32 bit e a 64 bit. In compilazioni di tale tipo rappresentano spostamenti a 32 bit o a 64 bit da una base a 32 bit o a 64 bit.

Un utilizzo dei puntatori basati su puntatori è correlato agli identificatori persistenti che contengono puntatori. Un elenco collegato costituito da puntatori basati su un puntatore può essere salvato su disco e successivamente ricaricato in un'altra posizione della memoria, con i puntatori che rimangono validi.

Nell'esempio seguente viene mostrato un puntatore basato su un puntatore.

```C
void *vpBuffer;

struct llist_t
{
    void __based( vpBuffer ) *vpData;
    struct llist_t __based( vpBuffer ) *llNext;
};
```

Il puntatore `vpBuffer` viene assegnato l'indirizzo di memoria allocata in un qualche punto successivo del programma. L'elenco collegato viene rilocato rispetto al valore `vpBuffer`.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Dichiaratori e dichiarazioni di variabili](../c-language/declarators-and-variable-declarations.md)
