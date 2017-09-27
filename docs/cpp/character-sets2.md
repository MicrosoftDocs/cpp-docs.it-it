---
title: Carattere Sets2 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
helpviewer_keywords:
- Character sets
- basic source character set (C++)
- universal character names
- basic execution character set (C++)
ms.assetid: 379a2af6-6422-425f-8352-ef0bca6c0d74
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 0ae13c64b6385fab6f41ba402737c7af3b24795a
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="character-sets"></a>Set di caratteri
Il testo di un programma C++ viene archiviato in file di origine che usano una particolare codifica dei caratteri. Lo standard C++ specifica un set di caratteri di origine base per i file di origine e un set di caratteri di esecuzione di base per i file compilati. Visual C++ consente un set aggiuntivo di caratteri specifici delle impostazioni locali da usare nei file di origine e nei file compilati.  
  
## <a name="character-sets"></a>Set di caratteri  
 Lo standard C++ specifica un *set di caratteri di origine di base* che possono essere usati nei file di origine. Per rappresentare i caratteri esterni a questo set, è possibile specificare i caratteri aggiuntivi usando un *nome di carattere universale*. Quando vengono compilati, il *set di caratteri di esecuzione di base* e *set di caratteri wide di esecuzione di base* rappresentano i caratteri e le stringhe che possono essere visualizzati in un programma. L'implementazione di Visual C++ consente caratteri aggiuntivi nel codice sorgente e nel codice compilato.  
  
### <a name="basic-source-character-set"></a>Set di caratteri di origine di base  
 Il *set di caratteri di origine di base* è costituito da 96 caratteri che possono essere usati nei file di origine. Questo set include il carattere di spazio, la tabulazione orizzontale, la tabulazione verticale, l'avanzamento modulo e i caratteri di controllo di nuova riga, e questo set di caratteri grafici:  
  
 `a b c d e f g h i j k l m n o p q r s t u v w x y z`  
  
 `A B C D E F G H I J K L M N O P Q R S T U V W X Y Z`  
  
 `0 1 2 3 4 5 6 7 8 9`  
  
 `_ { } [ ] # ( ) < > % : ; . ? * + - / ^ & | ~ ! = , \ " '`  
  
 **Sezione specifica Microsoft**  
  
 Visual C++ include il carattere `$` come membro del set di caratteri di origine di base. Visual C++ consente anche di usare un set aggiuntivo di caratteri da usare nei file di origine in base alla codifica file. Per impostazione predefinita, Visual Studio archivia i file di origine usando la tabella codici predefinita. Quando vengono salvati i file di origine usando una tabella codici specifica delle impostazioni locali o una tabella codici Unicode, Visual C++ consente di usare qualsiasi carattere di tale tabella codici nel proprio codice sorgente, ad eccezione dei codici di controllo non esplicitamente consentiti nel set di caratteri di origine di base. Ad esempio, è possibile inserire caratteri giapponesi nei commenti, negli identificatori o nei valori letterali stringa se si salva il file usando una tabella codici giapponese. Visual C++ non consente sequenze di caratteri che non possono essere convertite in caratteri multibyte o punti di codice Unicode validi. A seconda delle opzioni del compilatore, non tutti i caratteri consentiti potrebbero apparire negli identificatori. Per altre informazioni, vedere [Identifiers](../cpp/identifiers-cpp.md).  
  
 **Fine sezione specifica Microsoft**  
  
### <a name="universal-character-names"></a>nomi di caratteri universali  
 Siccome i programmi in C++ possono usare molti più caratteri rispetto a quelli specificati nel set di caratteri di origine di base, è possibile specificare questi caratteri in modo portabile usando *nomi di caratteri universali*. Un nome di carattere universale è costituito da una sequenza di caratteri che rappresenta un punto di codice Unicode.  Questi assumono due forme. Usare `\UNNNNNNNN` per rappresentare un punto di codice Unicode del modulo U+NNNNNNNN, dove NNNNNNNN è il numero del punto di codice esadecimale a otto cifre. Usare il `\uNNNN` a quattro cifre per rappresentare un punto di codice Unicode del modulo U+0000NNNN.  
  
 È possibile usare i nomi di caratteri universali negli identificatori e nei valori letterali carattere e stringa. Non è possibile usare un nome di carattere universale per rappresentare un punto di codice surrogato nell'intervallo 0xD800-0xDFFF. Usare invece il punto di codice desiderato; il compilatore genera automaticamente qualsiasi surrogato necessario. Ulteriori restrizioni si applicano ai nomi di caratteri universali che possono essere usati negli identificatori. Per altre informazioni, vedere [Identifiers](../cpp/identifiers-cpp.md) e [String and Character Literals](../cpp/string-and-character-literals-cpp.md).  
  
 **Sezione specifica Microsoft**  
  
 Il compilatore Visual C++ considera un carattere nel formato nome di carattere universale e valore letterale in modo intercambiabile. Ad esempio, è possibile dichiarare un identificatore usando il formato di nome di carattere universale e usarlo nel formato di valore letterale:  
  
```cpp  
auto \u30AD = 42; // \u30AD is 'キ'  
if (キ == 42) return true; // \u30AD and キ are the same to the compiler  
  
```  
  
 Il formato dei caratteri estesi negli Appunti di Windows è specifico delle impostazioni locali dell'applicazione. Tagliare e incollare tali caratteri nel codice da un'altra applicazione può introdurre codifiche di caratteri impreviste. Ciò può comportare errori di analisi senza alcuna causa visibile nel codice. È consigliabile impostare la codifica del file di origine su una tabella codici Unicode prima di incollare i caratteri estesi. È anche consigliabile usare un app IME o Mappa caratteri per generare caratteri estesi.  
  
 **Fine sezione specifica Microsoft**  
  
### <a name="basic-execution-character-set"></a>set di caratteri di esecuzione di base  
 Il *set di caratteri di esecuzione di base* e il *set di caratteri wide di esecuzione di base* sono costituiti da tutti i caratteri inclusi nel set di caratteri di origine di base e dai caratteri di controllo che rappresentano avviso, backspace, ritorno a capo e il carattere Null.   Il *set di caratteri di esecuzione* e il *set di caratteri wide di esecuzione* sono superset dei set di base. Includono i caratteri di origine definiti dall'implementazione all'esterno del set di caratteri di origine di base. Il set di caratteri di esecuzione ha una rappresentazione specifica delle impostazioni locali.
