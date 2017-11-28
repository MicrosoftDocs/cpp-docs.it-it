---
title: Specifica della larghezza per scanf | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apilocation:
- msvcr100.dll
- msvcr120.dll
- msvcr80.dll
- msvcr110_clr0400.dll
- msvcr110.dll
- msvcr90.dll
apitype: DLLExport
f1_keywords: scanf
dev_langs: C++
helpviewer_keywords: scanf function, width specification
ms.assetid: 94b4e8fe-c4a2-4799-8b6c-a2cf28ffb09c
caps.latest.revision: "16"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: d95e5dc4b137e050c65bc95b6b872ae1f5391baa
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="scanf-width-specification"></a>Specifica della larghezza per scanf
Le informazioni si applicano all’interpretazione di stringhe di formato nella famiglia di funzioni `scanf`, incluse le versioni protette, quali `scanf_s`. Queste funzioni presumono normalmente che il flusso di input sia suddiviso in una sequenza di token. I token sono separati da spazi vuoti (spazi, tabulazioni o caratteri di nuova riga) o nel caso dei tipi numerici, dalla fine naturale di un tipo di dati numerici secondo quanto indicato dal primo carattere che non può essere convertito in testo numerico. Tuttavia, è possibile utilizzare la specifica della larghezza per fare in modo di interrompere l'analisi dell'input prima della fine naturale di un token.  
  
 La specifica *larghezza* è costituita da caratteri inclusi tra l’identificatore `%` e l'identificatore del campo di tipo, che può includere un intero positivo denominato campo *larghezza* e uno o più caratteri che indicano la dimensione del campo, i quali possono essere anche considerati come modificatori del tipo di campo, ad esempio un valore che indica se il tipo integer è **short** o **long**. Tali caratteri vengono definiti prefisso di dimensione.  
  
## <a name="the-width-field"></a>Il campo della larghezza  
 Il campo *larghezza* è un intero positivo decimale che controlla il numero massimo di caratteri da leggere per il campo specifico. Un numero di caratteri non superiore al valore di *larghezza* viene convertito e archiviato nell'`argument` corrispondente. Un numero di caratteri inferiori al valore di *larghezza* può essere letto se uno spazio vuoto (spazio, tabulazione o carattere di nuova riga) o un carattere che non può essere convertito in base al formato specificato si presenta prima che venga raggiunto il valore della *larghezza*.  
  
 La specifica della larghezza è separata e distinta dall'argomento relativo alle dimensioni del buffer richiesto dalle versioni sicure di queste funzioni (ad esempio, `scanf_s`, `wscanf_s` e così via). Nell'esempio seguente, la specifica della larghezza è pari a 20, il che significa che fino a un massimo di 20 caratteri devono essere letti dal flusso di input. La lunghezza del buffer è 21, che include spazio per i 20 caratteri possibili e il terminatore null:  
  
```  
char str[21];  
scanf_s("%20s", str, 21);  
```  
  
 Se il campo *larghezza* non viene usato, `scanf_s` prova a leggere l'intero token nella stringa. Se la dimensione specificata non è sufficientemente grande da contenere il token intero, nulla verrà scritto nella stringa di destinazione. Se viene specificato il campo *larghezza*, i primi caratteri pari al valore di *larghezza* nel token verranno scritti nella stringa di destinazione insieme al carattere di terminazione Null.  
  
## <a name="the-size-prefix"></a>Il prefisso di dimensione  
 I prefissi facoltativi **h**, **l**, **ll**, **I64** e **L** indicano le dimensioni dell'`argument` (lungo o breve, con caratteri a un byte o caratteri wide, a seconda del carattere di tipo che modificano). Questi caratteri di specifica del formato vengono utilizzati con i caratteri di tipo nelle funzioni `scanf` o `wscanf` per specificare l'interpretazione degli argomenti, come illustrato nella tabella seguente. Il prefisso di tipo **I64** è un'estensione Microsoft e non è compatibile con lo standard ANSI. I caratteri di tipo e i relativi significati sono descritti nella tabella "Caratteri tipo per funzioni scanf" in [Caratteri di campo di tipo per scanf](../c-runtime-library/scanf-type-field-characters.md).  
  
> [!NOTE]
>  I prefissi **h**, **l** e **L** sono estensioni Microsoft quando usate con i dati di tipo `char`.  
  
### <a name="size-prefixes-for-scanf-and-wscanf-format-type-specifiers"></a>Prefissi di dimensione per identificatori di tipo di formato scanf e wscanf  
  
|Per specificare|Prefisso da usare|Con identificatore del tipo|  
|----------------|----------------|-------------------------|  
|**double**|**l**|**e**, **E**, **f**, **g** o **G**|  
|**long double** (uguale a double)|**L**|**e**, **E**, **f**, **g** o **G**|  
|**long int**|**l**|**d**, **i**, **o**, **x**, o **X**|  
|**long unsigned int**|**l**|**u**|  
|**long long**|**ll**|**d**, **i**, **o**, **x**, o **X**|  
|`short int`|**h**|**d**, **i**, **o**, **x**, o **X**|  
|**short unsigned int**|**h**|**u**|  
|__**int64**|**I64**|**d**, **i**, **o**, **u**, **x** o **X**|  
|Carattere a byte singolo con `scanf`|**h**|**c** o **C**|  
|Carattere a byte singolo con `wscanf`|**h**|**c** o **C**|  
|Carattere wide con `scanf`|**l**|**c** o **C**|  
|Carattere wide con `wscanf`|**l**|**c** o **C**|  
|Stringa di caratteri a un byte con `scanf`|**h**|**s** o **S**|  
|Stringa di caratteri a un byte con `wscanf`|**h**|**s** o **S**|  
|Stringa di caratteri wide con `scanf`|**l**|**s** o **S**|  
|Stringa di caratteri wide con `wscanf`|**l**|**s** o **S**|  
  
 Gli esempi seguenti usano **h** e **l** con le funzioni `scanf_s` e `wscanf_s`:  
  
```  
scanf_s("%ls", &x, 2);     // Read a wide-character string  
wscanf_s(L"%hC", &x, 2);    // Read a single-byte character  
```  
  
 Se si utilizza una funzione non protetta nella famiglia `scanf`, omettere il parametro di dimensione che indica la lunghezza del buffer dell'argomento precedente.  
  
## <a name="reading-undelimited-strings"></a>Lettura di stringhe non delimitate  
 Per leggere le stringhe non delimitate da spazi vuoti, un set di caratteri tra parentesi quadre (**[ ]**) può essere sostituito per il carattere di tipo **s** (stringa). Il set di caratteri tra parentesi quadre è considerato una stringa di controllo. Il campo di input corrispondente viene letto fino al primo carattere che non viene visualizzato nella stringa di controllo. Se il primo carattere nel set è un accento circonflesso (**^**), l'effetto è invertito: il campo di input viene letto fino al primo carattere visualizzato nella parte rimanente del set di caratteri.  
  
 Si noti che **%[a-z]** e **%[z-a]** vengono interpretati come equivalenti a **%[abcde...z]**. Si tratta di un comune estensione di funzione `scanf`, ma si noti che lo standard ANSI non lo richiede.  
  
## <a name="reading-unterminated-strings"></a>Lettura di stringhe senza terminazione  
 Per archiviare una stringa senza archiviare un carattere di terminazione Null ('\0'), usare la specifica `%`*n***c** dove *n* è un intero decimale. In questo caso, il carattere di tipo **c** indica che l'argomento è un puntatore a una matrice di caratteri. I successivi *n* caratteri vengono letti dal flusso di input nel percorso specificato e non viene accodato nessun carattere Null ('\0'). Se *n* non viene specificato, il valore predefinito è 1.  
  
## <a name="when-scanf-stops-reading-a-field"></a>Quando scanf interrompe la lettura di un campo  
 La funzione `scanf` esegue l'analisi di ogni campo di input di un carattere. Potrebbe smettere di leggere un determinato campo di input prima di raggiungere un carattere di spazio per una serie di motivi:  
  
-   La larghezza specificata è stata raggiunta.  
  
-   Il carattere successivo non può essere convertito come specificato.  
  
-   I conflitti del carattere successivo con un carattere nella stringa di controllo con cui dovrebbe corrispondere.  
  
-   Il carattere successivo non viene visualizzato in un set di caratteri specificato.  
  
 Per qualsiasi motivo, quando la funzione `scanf` interrompe la lettura di un campo di input, il campo di input successivo viene considerato per iniziare con il primo carattere da leggere. Il carattere in conflitto se è presente, viene considerato non letto ed è il primo carattere del campo di input successivo o il primo carattere nelle successive operazioni di lettura nel flusso di input.  
  
## <a name="see-also"></a>Vedere anche  
 [scanf, _scanf_l, wscanf, _wscanf_l](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)   
 [scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)   
 [Campi per la specifica di formato: funzioni scanf e wscanf](../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md)   
 [Caratteri di campo di tipo per scanf](../c-runtime-library/scanf-type-field-characters.md)