---
title: Lunghezza massima della stringa
ms.date: 11/04/2016
helpviewer_keywords:
- lengths, strings
- string length, maximum
- maximum string length
- strings [C++], length
ms.assetid: 99a80e4a-6212-47b7-a6bd-bdf99bd44928
ms.openlocfilehash: 650088249e4c6abd515c29b873a9f09dc1d2a60a
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56148309"
---
# <a name="maximum-string-length"></a>Lunghezza massima della stringa

**Sezione specifica Microsoft**

La compatibilità ANSI richiede al compilatore di accettare un massimo di 509 caratteri in un valore letterale stringa dopo la concatenazione. La lunghezza massima di un valore letterale stringa consentita in Microsoft C è di circa 2.048 byte. Nei casi in cui il valore letterale stringa è costituito da parti racchiuse tra virgolette doppie, tuttavia, il preprocessore concatena le parti in una singola stringa e, per ogni riga concatenata, aggiungere al numero di byte totale un ulteriore byte.

Ad esempio, si consideri il caso di una stringa costituita da 40 righe da 50 caratteri per riga (2.000 caratteri) più una riga da 7 caratteri, in cui ogni riga è racchiusa tra virgolette doppie. I byte totali sono 2.008, ovvero 2.007 più un byte per il carattere di terminazione null. In fase di concatenazione, viene aggiunto un byte per ognuna delle prime 40 righe. In questo modo, si ottengono 2.048 byte totali. Si noti, tuttavia, che se si usano le continuazioni di riga (\\) anziché le virgolette doppie, il preprocessore non aggiunge il carattere extra per ogni riga.

Mentre una stringa singola tra virgolette non può superare i 2048 byte, è possibile costruire un valore letterale stringa di circa 65535 byte, concatenando più stringhe.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Valori letterali stringa C](../c-language/c-string-literals.md)
