---
description: 'Altre informazioni su: scrittura di manipolatori personalizzati senza argomenti'
title: Scrittura di manipolatori personalizzati senza gli argomenti
ms.date: 11/04/2016
helpviewer_keywords:
- manipulators
ms.assetid: 2dc62d09-45b7-454d-bd9d-55f3c72c206d
ms.openlocfilehash: 593db0a3dacb54c94cc865ebc20b1e1b39d2c208
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97187754"
---
# <a name="writing-your-own-manipulators-without-arguments"></a>Scrittura di manipolatori personalizzati senza gli argomenti

La scrittura di manipolatori che non usano argomenti non richiede né la derivazione di classi né l'uso di macro complesse. Si supponga che la stampante richieda la coppia \<ESC> [per attivare la modalità grassetto. È possibile inserire la coppia direttamente nel flusso:

```cpp
cout << "regular " << '\033' << '[' << "boldface" << endl;
```

In alternativa, è possibile definire il manipolatore `bold` che inserisce i caratteri:

```cpp
ostream& bold(ostream& os) {
    return os << '\033' << '[';
}
cout << "regular " << bold << "boldface" << endl;
```

La funzione `bold` definita a livello globale accetta un argomento di riferimento `ostream` che restituisce il riferimento `ostream`. Non è una funzione membro o di tipo friend perché non deve accedere a nessun elemento di classe privata. La funzione `bold` si connette al flusso perché l'operatore `<<` del flusso è sottoposto a overload per accettare tale tipo di funzione. Viene usata una dichiarazione simile alla seguente:

```cpp
_Myt& operator<<(ios_base& (__cdecl *_Pfn)(ios_base&))
{
    // call ios_base manipulator
    (*_Pfn)(*(ios_base *)this);

    return (*this);
}
```

È possibile usare questa funzionalità per estendere altri operatori di overload. In questo caso, il fatto che `bold` inserisca i caratteri nel flusso è casuale. La funzione viene chiamata quando viene inserita nel flusso, non necessariamente quando i caratteri adiacenti vengono stampati. Di conseguenza, la stampa potrebbe essere ritardata a causa del buffer del flusso.

## <a name="see-also"></a>Vedi anche

[Flussi di output](../standard-library/output-streams.md)
