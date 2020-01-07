---
title: Token e set di caratteri
ms.date: 12/10/2019
helpviewer_keywords:
- Tokens (C++)
- Character sets
- basic source character set (C++)
- universal character names
- basic execution character set (C++)
ms.assetid: 379a2af6-6422-425f-8352-ef0bca6c0d74
ms.openlocfilehash: 1f6dbe2faa6348d61ec00b411cc35e8ef5ceb57a
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75301613"
---
# <a name="tokens-and-character-sets"></a>Token e set di caratteri

Il testo di un C++ programma è costituito da token e da *spazi vuoti*. Un token è il più piccolo elemento di un programma C++ significativo per il compilatore. Il C++ parser riconosce questi tipi di token:

- [Parole chiave](../cpp/keywords-cpp.md)
- [Identificatori](../cpp/identifiers-cpp.md)
- [Valori letterali numerici, booleani e puntatore](../cpp/numeric-boolean-and-pointer-literals-cpp.md)
- [Valori letterali stringa e carattere](../cpp/string-and-character-literals-cpp.md)
- [Valori letterali definiti dall'utente](../cpp/user-defined-literals-cpp.md)
- [Operatori](../cpp/cpp-built-in-operators-precedence-and-associativity.md)
- [Segni di punteggiatura](../cpp/punctuators-cpp.md)

I token sono in genere separati da *spazi vuoti*, che possono essere uno o più:

- Valori vuoti
- Tabulazioni orizzontali o verticali
- Nuove righe
- Feed di form
- Comments

## <a name="basic-source-character-set"></a>Set di caratteri di origine di base

Lo C++ standard specifica un *set di caratteri di origine di base* che può essere usato nei file di origine. Per rappresentare i caratteri esterni a questo set, è possibile specificare i caratteri aggiuntivi usando un *nome di carattere universale*. L'implementazione di MSVC consente caratteri aggiuntivi. Il *set di caratteri di origine di base* è costituito da 96 caratteri che possono essere usati nei file di origine. Questo set include il carattere di spazio, la tabulazione orizzontale, la tabulazione verticale, l'avanzamento modulo e i caratteri di controllo di nuova riga, e questo set di caratteri grafici:

`a b c d e f g h i j k l m n o p q r s t u v w x y z`

`A B C D E F G H I J K L M N O P Q R S T U V W X Y Z`

`0 1 2 3 4 5 6 7 8 9`

`_ { } [ ] # ( ) < > % : ; . ? * + - / ^ & | ~ ! = , \ " '`

**Sezione specifica Microsoft**

MSVC include il carattere `$` come membro del set di caratteri di origine di base. MSVC consente inoltre di usare un set di caratteri aggiuntivo nei file di origine, in base alla codifica dei file. Per impostazione predefinita, Visual Studio archivia i file di origine usando la tabella codici predefinita. Quando i file di origine vengono salvati usando una tabella codici specifica delle impostazioni locali o una tabella codici Unicode, MSVC consente di usare qualsiasi carattere di tale tabella codici nel codice sorgente, ad eccezione dei codici di controllo non esplicitamente consentiti nel set di caratteri di origine di base. Ad esempio, è possibile inserire caratteri giapponesi nei commenti, negli identificatori o nei valori letterali stringa se si salva il file usando una tabella codici giapponese. MSVC non consente sequenze di caratteri che non possono essere convertite in caratteri multibyte o punti di codice Unicode validi. A seconda delle opzioni del compilatore, non tutti i caratteri consentiti potrebbero apparire negli identificatori. Per altre informazioni, vedere [Identifiers](../cpp/identifiers-cpp.md).

**Fine sezione specifica Microsoft**

### <a name="universal-character-names"></a>nomi di caratteri universali

Siccome i programmi in C++ possono usare molti più caratteri rispetto a quelli specificati nel set di caratteri di origine di base, è possibile specificare questi caratteri in modo portabile usando *nomi di caratteri universali*. Un nome di carattere universale è costituito da una sequenza di caratteri che rappresenta un punto di codice Unicode.  Questi assumono due forme. Usare `\UNNNNNNNN` per rappresentare un punto di codice Unicode del modulo U+NNNNNNNN, dove NNNNNNNN è il numero del punto di codice esadecimale a otto cifre. Usare il `\uNNNN` a quattro cifre per rappresentare un punto di codice Unicode del modulo U+0000NNNN.

È possibile usare i nomi di caratteri universali negli identificatori e nei valori letterali carattere e stringa. Non è possibile usare un nome di carattere universale per rappresentare un punto di codice surrogato nell'intervallo 0xD800-0xDFFF. Usare invece il punto di codice desiderato; il compilatore genera automaticamente qualsiasi surrogato necessario. Ulteriori restrizioni si applicano ai nomi di caratteri universali che possono essere usati negli identificatori. Per altre informazioni, vedere [Identifiers](../cpp/identifiers-cpp.md) e [String and Character Literals](../cpp/string-and-character-literals-cpp.md).

**Sezione specifica Microsoft**

Il compilatore C++ Microsoft tratta un carattere nel formato nome di carattere universale e il formato letterale interscambiabile. Ad esempio, è possibile dichiarare un identificatore usando il formato di nome di carattere universale e usarlo nel formato di valore letterale:

```cpp
auto \u30AD = 42; // \u30AD is 'キ'
if (キ == 42) return true; // \u30AD and キ are the same to the compiler
```

Il formato dei caratteri estesi negli Appunti di Windows è specifico delle impostazioni locali dell'applicazione. Tagliare e incollare tali caratteri nel codice da un'altra applicazione può introdurre codifiche di caratteri impreviste. Ciò può comportare errori di analisi senza alcuna causa visibile nel codice. È consigliabile impostare la codifica del file di origine su una tabella codici Unicode prima di incollare i caratteri estesi. È anche consigliabile usare un app IME o Mappa caratteri per generare caratteri estesi.

**Fine sezione specifica Microsoft**

### <a name="execution-character-sets"></a>Set di caratteri di esecuzione

I *set di caratteri di esecuzione* rappresentano i caratteri e le stringhe che possono essere visualizzati in un programma compilato. Questi set di caratteri sono costituiti da tutti i caratteri consentiti in un file di origine, nonché i caratteri di controllo che rappresentano avviso, BACKSPACE, ritorno a capo e il carattere null. Il set di caratteri di esecuzione ha una rappresentazione specifica delle impostazioni locali.
