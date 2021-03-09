---
title: AddressSanitizer Shadow byte
description: Descrizione tecnica dei byte Shadow scritti e letti dal codice generato dal compilatore e dal runtime AddressSanitizer.
ms.date: 03/02/2021
helpviewer_keywords:
- Shadow bytes
- AddressSanitizer shadow bytes
- Address Sanitizer shadow bytes
- ASan shadow bytes
ms.openlocfilehash: 89c3051d2e68d579f2f187fcd12b45ff52cd8a58
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470457"
---
# <a name="addresssanitizer-shadow-bytes"></a>AddressSanitizer Shadow byte

Viene brevemente riepilogato il concetto di byte Shadow e il modo in cui possono essere utilizzati dall'implementazione di runtime di [`/fsanitize=address`](../build/reference/fsanitize.md) . Per ulteriori informazioni, fare riferimento all'articolo relativo al [documento Seminal](https://www.usenix.org/system/files/conference/atc12/atc12-final39.pdf) e all' [algoritmo AddressSanitizer](https://github.com/google/sanitizers/wiki/AddressSanitizerAlgorithm).

## <a name="core-concept"></a>Concetto di base

Ogni **8 byte** nello spazio degli indirizzi virtuali dell'applicazione può essere descritto usando **un byte Shadow**.

Un byte ombreggiatura descrive il numero di byte attualmente accessibili come segue:

- 0 indica tutti gli 8 byte
- 1-7 significa da uno a sette byte
- I numeri negativi codificano il contesto per il runtime da usare per la diagnostica dei report.

### <a name="shadow-byte-legend"></a>Legenda byte Shadow

Prendere in considerazione questa legenda dei byte Shadow in cui sono definiti tutti i numeri negativi:

:::image type="content" source="./media/asan-shadow-byte-legend.png" alt-text="Screenshot della legenda di byte Shadow AddressSanitizer.":::

## <a name="mapping---describing-your-address-space"></a>Mapping-Descrizione dello spazio degli indirizzi

Ogni 8 byte nello spazio degli indirizzi virtuali dell'applicazione "0-mod-8" allineato può essere mappato al byte ombreggiato che descrive lo slot nello spazio degli indirizzi virtuali.  Questo mapping può essere eseguito con una **semplice operazione di spostamento e aggiunta**.

In x86:

```cpp
char shadow_byte_value = *((Your_Address >> 3) + 0x30000000)
```

In x64:

```cpp
char shadow_byte_value = *((Your_Address >> 3) + _asan_runtime_assigned_offset)
```

## <a name="code-generation---tests"></a>Generazione del codice-test

Valutare il modo in cui i byte Shadow specifici possono essere scritti, dal codice generato dal compilatore, dai dati statici o dal runtime. Questo pseudo-codice Mostra come è possibile generare un controllo che precede qualsiasi carico o archivio:

```cpp
ShadowAddr = (Addr >> 3) + Offset;
if (*ShadowAddr != 0) {
    ReportAndCrash(Addr);
}
```

Quando si instrumentano un riferimento alla memoria con una larghezza inferiore a 8 byte, la strumentazione è leggermente più complessa. Se il valore dell'ombreggiatura è positivo (ovvero solo i primi k byte nella parola a 8 byte possono essere accessibili), è necessario confrontare gli ultimi 3 bit dell'indirizzo con k.

```cpp
ShadowAddr = (Addr >> 3) + Offset;
k = *ShadowAddr;
if (k != 0 && ((Addr & 7) + AccessSize > k)) {
    ReportAndCrash(Addr);
}
```

Il runtime e il codice generato dal compilatore scrivono entrambi i byte Shadow. Questi byte Shadow consentono o revocano l'accesso quando l'ambito termina o l'archiviazione viene liberata. I controlli sopra riportati leggono i byte Shadow che descrivono "slot" a 8 byte nello spazio degli indirizzi dell'applicazione, in un determinato momento nell'esecuzione del programma. Oltre a questi controlli generati in modo esplicito, il runtime controlla anche i byte di ombreggiatura dopo aver intercettato (o "hook") molte funzioni in CRT.

Per ulteriori informazioni, vedere l'elenco delle [funzioni intercettate](./asan-runtime.md#default-interceptors).

## <a name="setting-shadow-bytes"></a>Impostazione di byte Shadow

Sia il codice generato dal compilatore che il runtime AddressSanitizer possono scrivere byte Shadow. Il compilatore, ad esempio, può impostare i byte shadow per consentire l'accesso a dimensione fissa per gli stack locali definiti in un ambito interno. Il runtime può racchiudere le variabili globali nella sezione dati con byte ombreggiatura.

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)
