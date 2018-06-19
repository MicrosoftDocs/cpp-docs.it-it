---
title: Panoramica delle dichiarazioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- declarations, about declarations
- type qualifiers
ms.assetid: fcd2364c-c2a5-4fbf-9027-19dac4144cb5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cd8670815b908f66a6e2ed400bc87ca07c369ee4
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32392627"
---
# <a name="overview-of-declarations"></a>Cenni preliminari sulle dichiarazioni
Una "dichiarazione" consente di specificare l'interpretazione e gli attributi di un set di identificatori. Una dichiarazione che causa anche la prenotazione delle risorse di archiviazione per l'oggetto o la funzione denominati dall'identificatore è chiamata "definizione". Le dichiarazioni C per variabili, funzioni e tipi hanno la sintassi seguente:  
  
## <a name="syntax"></a>Sintassi  
 `declaration`:  
 *declaration-specifiers* *attribute-seq*opt*init-declarator-list*opt **;**  
  
 /\* *attribute-seq*opt è specifico di Microsoft */  
  
 *declaration-specifiers*:  
 *storage-class-specifier declaration-specifiers*opz  
  
 *type-specifier declaration-specifiers*opz  
  
 *type-qualifier declaration-specifiers*opz  
  
 *init-declarator-list*:  
 *init-declarator*  
  
 *init-declarator-list* , *init-declarator*  
  
 *init-declarator*:  
 *declarator*  
  
 *declarator*  **=**  *initializer*  
  
> [!NOTE]
>  Questa sintassi per `declaration` non viene ripetuta nelle sezioni seguenti. La sintassi nelle sezioni seguenti di solita inizia con il non terminale `declarator`.  
  
 Le dichiarazioni nel componente *init-declarator-list* contengono gli identificatori ai quali viene assegnato il nome; *init* è l'abbreviazione di inizializzatore. L'elenco *init-declarator-list* è una sequenza di dichiaratori separati da virgola, ognuno dei quali può avere altre informazioni sui tipi, oppure un inizializzatore o entrambi. `declarator` contiene gli eventuali identificatori dichiarati. Il non terminale *declaration-specifiers* consiste in una sequenza di identificatori di tipi e di classi di archiviazione che indicano il collegamento, la durata di archiviazione e almeno una parte del tipo di entità denotate dai dichiaratori. Di conseguenza, le dichiarazioni sono costituite da una determinata combinazione di identificatori di classi di archiviazioni, identificatori di tipi, qualificatori di tipo e inizializzatori.  
  
 Le dichiarazioni possono contenere uno o più degli attributi facoltativi elencati in *attribute-seq*; *seq* è l'abbreviazione di sequenza. Questi attributi specifici di Microsoft eseguono una varietà di funzioni, che saranno discusse più dettagliatamente nel resto di questo manuale.  
  
 Nella forma generale di una dichiarazione di variabili, *type-specifier* restituisce il tipo di dati della variabile. *type-specifier* può essere un'istruzione composta, ad esempio quando il tipo viene modificato da **const** o da `volatile`. `declarator` fornisce il nome della variabile, possibilmente modificato in modo da dichiarare un tipo di matrice o puntatore. Ad esempio,  
  
```  
int const *fp;  
```  
  
 dichiara una variabile denominata `fp` come puntatore a un valore `int` non modificabile (**const**). È possibile definire più variabili in una dichiarazione usando più dichiaratori, separati da virgole.  
  
 Una dichiarazione deve avere almeno un dichiaratore oppure il relativo identificatore di tipi deve dichiarare un tag della struttura, un tag di unione o i membri di un'enumerazione. I dichiaratori forniscono le eventuali informazioni rimanenti su un identificatore. Un dichiaratore è un identificatore che può essere modificato con parentesi quadre (**[ ]**), asterischi (**\***) o parentesi tonde (**( )** ) per dichiarare rispettivamente un tipo di matrice, di puntatore o di funzione. Quando si dichiarano variabili semplici (ad esempio caratteri, integri ed elementi a virgola mobile) o strutture e unioni di variabili semplici, `declarator` è solo un identificatore. Per altre informazioni sui dichiaratori, vedere [Dichiaratori e dichiarazioni di variabili](../c-language/declarators-and-variable-declarations.md).  
  
 Tutte le definizioni sono implicitamente dichiarazioni, ma non tutte le dichiarazioni sono definizioni. Ad esempio, le dichiarazioni di variabili che iniziano con l'identificatore di classi di archiviazione `extern` fanno "riferimento" alle dichiarazioni, piuttosto che "definirle". Se è necessario fare riferimento a una variabile esterna prima che sia definita oppure se viene definita in un altro file di origine da quello in cui è usata, è necessaria una dichiarazione `extern`. Le risorse di archiviazione non vengono allocate "facendo riferimento" alle dichiarazioni, né è possibile inizializzare le variabili nelle dichiarazioni.  
  
 Una classe o un tipo di archiviazione (o entrambi) è necessaria nelle dichiarazioni delle variabili. Fatta eccezione per `__declspec`, è consentito un solo identificatore di classi di archiviazione in una dichiarazione e non tutti gli identificatori di classi di archiviazione sono consentiti in ogni contesto. La classe di archiviazione `__declspec` è consentita con altri identificatori di classi di archiviazione e più di una volta. L'identificatore di classi di archiviazione di una dichiarazione incide sulla modalità di archiviazione e inizializzazione dell'elemento dichiarato e su quali parti di un programma possono fare riferimento all'elemento.  
  
 I terminali *storage-class-specifier* definiti in C sono **auto**, `extern`, **register**, **static** e `typedef`. In più, Microsoft C include il terminale *storage-class-specifier* `__declspec`. Tutti i terminali *storage-class-specifier*, tranne `typedef` e `__declspec`, sono trattati nella sezione [Classi di archiviazione](../c-language/c-storage-classes.md). Per informazioni su `typedef`, vedere [Dichiarazioni typedef](../c-language/typedef-declarations.md). Per informazioni su `__declspec`, vedere [Attributi di classi di archiviazione estesi](../c-language/c-extended-storage-class-attributes.md).  
  
 La posizione della dichiarazione all'interno del programma di origine e la presenza o l'assenza di altre dichiarazioni della variabile sono fattori importanti nel determinare la durata delle variabili. Possono esserci più ridichiarazioni, ma una sola definizione. Tuttavia, una definizione può apparire in più unità di conversione. Per oggetti con collegamento interno, questa regola di applica separatamente a ogni unità di conversione, perché gli oggetti collegati internamente sono univoci di un'unità di conversione. Per gli oggetti con collegamenti esterni, questa regola si applica all'intero programma. Per altre informazioni sulla visibilità, vedere [Durata, ambito, visibilità e collegamento](../c-language/lifetime-scope-visibility-and-linkage.md).  
  
 Gli identificatori di tipi forniscono alcune informazioni sui tipi di dati degli identificatori. L'identificatore di tipi predefinito è `int`. Per altre informazioni, vedere [Identificatori di tipi](../c-language/c-type-specifiers.md). Gli identificatori di tipi possono anche definire i tag del tipo, i nomi di componenti di struttura e unione e le costanti di enumerazione. Per altre informazioni, vedere [Dichiarazioni di enumerazioni](../c-language/c-enumeration-declarations.md), [Dichiarazioni di struttura](../c-language/structure-declarations.md) e [Dichiarazioni di unione](../c-language/union-declarations.md).  
  
 Esistono due terminali *type-qualifier*: **const** e `volatile`. Questi qualificatori specificano le proprietà aggiuntive dei tipi pertinenti solo durante l'accesso agli oggetti di tale tipo attraverso le espressioni l-value. Per altre informazioni su **const** e `volatile`, vedere [Qualificatori di tipo](../c-language/type-qualifiers.md). Per una definizione di l-value, vedere [Espressioni L-Value e R-Value](../c-language/l-value-and-r-value-expressions.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riepilogo di sintassi del linguaggio C](../c-language/c-language-syntax-summary.md)   
 [Dichiarazioni e tipi](../c-language/declarations-and-types.md)   
 [Riepilogo delle dichiarazioni](../c-language/summary-of-declarations.md)