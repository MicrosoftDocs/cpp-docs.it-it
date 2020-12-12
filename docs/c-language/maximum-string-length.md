---
description: 'Altre informazioni su: lunghezza massima della stringa'
title: Lunghezza massima della stringa
ms.date: 11/04/2016
helpviewer_keywords:
- lengths, strings
- string length, maximum
- maximum string length
- strings [C++], length
ms.assetid: 99a80e4a-6212-47b7-a6bd-bdf99bd44928
ms.openlocfilehash: 1da7618a044be2427bd0b0f7f4931287ee4b8014
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97243432"
---
# <a name="maximum-string-length"></a>Lunghezza massima della stringa

**Specifico di Microsoft**

La compatibilità ANSI richiede al compilatore di accettare un massimo di 509 caratteri in un valore letterale stringa dopo la concatenazione. La lunghezza massima di un valore letterale stringa consentita in Microsoft C è di circa 2.048 byte. Nei casi in cui il valore letterale stringa è costituito da parti racchiuse tra virgolette doppie, tuttavia, il preprocessore concatena le parti in una singola stringa e, per ogni riga concatenata, aggiungere al numero di byte totale un ulteriore byte.

Ad esempio, si consideri il caso di una stringa costituita da 40 righe da 50 caratteri per riga (2.000 caratteri) più una riga da 7 caratteri, in cui ogni riga è racchiusa tra virgolette doppie. I byte totali sono 2.008, ovvero 2.007 più un byte per il carattere di terminazione null. In fase di concatenazione, viene aggiunto un byte per ognuna delle prime 40 righe. In questo modo, si ottengono 2.048 byte totali. Si noti, tuttavia, che se si usano le continuazioni di riga (\\) anziché le virgolette doppie, il preprocessore non aggiunge il carattere extra per ogni riga.

Mentre una stringa singola tra virgolette non può superare i 2048 byte, è possibile costruire un valore letterale stringa di circa 65535 byte, concatenando più stringhe.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Valori letterali stringa C](../c-language/c-string-literals.md)
