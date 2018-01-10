---
title: Nomi decorati | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- decorated names, definition
- name decoration [C++]
- names [C++], decorated
ms.assetid: a4e9ae8e-b239-4454-b401-4102793cb344
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a2ad7fc8e6d9b7fa261d7811086ef02738c77e49
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="decorated-names"></a>Nomi decorati
Le funzioni, i dati e gli oggetti nei programmi C e C++ sono rappresentati internamente dai nomi decorati. Oggetto *nome decorato* è una stringa codificata creata dal compilatore durante la compilazione di un oggetto, dati o definizione di funzione. Registra convenzioni di chiamata, tipi, parametri di funzione e altre informazioni insieme al nome. Questa decorazione dei nomi, nota anche come *alterazione dei nomi*, consente al linker di trovare le funzioni corrette e gli oggetti durante il collegamento di un file eseguibile.  
  
 Le convenzioni di denominazione decorata sono state modificate in alcune versioni di Visual C++ e possono anche essere diverse a seconda delle architetture di destinazione. Per un corretto collegamento con i file di origine creati usando Visual C++, le DLL e le librerie C e C++ dovrebbero essere compilate usando gli stessi set di strumenti, gli stessi flag e la stessa architettura di destinazione del compilatore.  
  
 **Sommario**  
  
-   [Utilizzo dei nomi decorati](#Using)  
  
-   [Formato di C++ nome decorato](#Format)  
  
-   [Formato di un C nome decorato](#FormatC)  
  
-   [Visualizzazione dei nomi decorati](#Viewing)  
  
-   [Nomi di visualizzazione non decorato](#Undecorated)  
  
##  <a name="Using"></a>Utilizzo dei nomi decorati  
 Di solito non è necessario conoscere il nome decorato per scrivere un codice che esegua la compilazione e crei il collegamento correttamente. I nomi decorati sono un dettaglio di implementazione interno del compilatore e del linker. Gli strumenti in genere possono gestire il nome nel formato non decorato. Tuttavia, un nome decorato a volte è necessario quando si specifica un nome di funzione per il linker e altri strumenti. Ad esempio, per trovare una corrispondenza con funzioni C++ in overload, membri di spezi dei nomi, costruttori di classe, distruttori e speciali funzioni membro, è necessario specificare il nome decorato. Per informazioni dettagliate sui flag di opzione e altre situazioni in cui sono necessari i nomi decorati, vedere la documentazione sugli strumenti e le opzioni in uso.  
  
 Se si modifica il nome della funzione, la classe, la convenzione di chiamata, il tipo restituito o qualsiasi parametro, viene modificato anche il nome decorato. In questo caso, è necessario ottenere il nuovo nome decorato e usarlo ovunque sia specificato il nome decorato.  
  
 La decorazione dei nomi è importante anche quando si crea un collegamento a un codice scritto in altri linguaggi di programmazione o si usano altri compilatori. Ogni compilatore usa una convenzione di decorazione dei nomi diversa. Quando l'eseguibile crea un collegamento a un codice scritto in un altro linguaggio, si deve prestare particolare attenzione nel trovare una corrispondenza con i nomi esportati e importati e con le convenzioni di chiamata. Il codice del linguaggio assembly deve usare i nomi decorati e le convenzioni di chiamata di Visual C++ per creare un collegamento con il codice sorgente scritto con Visual C++.  
  
##  <a name="Format"></a>Formato di C++ nome decorato  
 Un nome decorato per una funzione C++ contiene le informazioni seguenti:  
  
-   Nome della funzione.  
  
-   Classe di cui la funzione è membro, se è una funzione membro. Potrebbe includere la classe che comprende la classe che contiene la funzione e così via.  
  
-   Spazio dei nomi a cui la funzione appartiene, se fa parte di uno spazio dei nomi.  
  
-   Tipi dei parametri della funzione.  
  
-   Convenzione di chiamata.  
  
-   Tipo restituito della funzione.  
  
 I nomi della funzione e della classe vengono codificati nel nome decorato. La parte rimanente del nome decorato è un codice con un significato interno solo per il compilatore e il linker. Di seguito sono riportati esempi di nomi di C++ non decorati e decorati.  
  
|Nome non decorato|Nome decorato|  
|----------------------|--------------------|  
|`int a(char){int i=3;return i;};`|`?a@@YAHD@Z`|  
|`void __stdcall b::c(float){};`|`?c@b@@AAGXM@Z`|  
  
##  <a name="FormatC"></a>Formato di un C nome decorato  
 Il formato della decorazione per una funzione C dipende dalla convenzione di chiamata usata nella dichiarazione, come mostrato nella tabella seguente. Questo è il formato della decorazione usato anche quando viene dichiarato che il codice C++ ha un collegamento `extern "C"`. La convenzione di chiamata predefinita è `__cdecl`. Si noti che in un ambiente a 64 bit le funzioni non sono decorate.  
  
|Convenzione di chiamata|Effetto|  
|------------------------|----------------|  
|`__cdecl`|Carattere di sottolineatura iniziale (**_**)|  
|`__stdcall`|Carattere di sottolineatura iniziale (**_**) e una finale simbolo di chiocciola (@) seguita dal numero di byte nell'elenco di parametri in decimali|  
|`__fastcall`|Chiocciole (@) iniziale e finale seguite da un numero decimale che rappresenta il numero di byte nell'elenco di parametri|  
|`__vectorcall`|Due chiocciole (@@) finali seguite da un numero decimale di byte nell'elenco di parametri|  
  
##  <a name="Viewing"></a>Visualizzazione dei nomi decorati  
 È possibile ottenere il formato decorato di un nome di simbolo dopo avere compilato il file di origine contenente il prototipo o la definizione di dati, oggetti o funzioni. Per esaminare i nomi decorati nel programma, è possibile usare uno dei metodi seguenti:  
  
-   #### <a name="to-use-a-listing-to-view-decorated-names"></a>Per usare un listato per la visualizzazione dei nomi decorati  
  
    1.  Generare un listato compilando il file di origine che contiene i dati, l'oggetto, o definizione di funzione o prototipo con il [tipo File listato](../../build/reference/fa-fa-listing-file.md) l'opzione del compilatore impostato su Assembly con codice sorgente (**/FAs**).  
  
         Ad esempio, immettere `cl /c /FAs example.cpp` un prompt dei comandi per sviluppatori per generare un file di listato, example.asm.  
  
    2.  Nel file di listato risultante, trovare la riga che inizia con PUBLIC e finisce con un punto e virgola seguito dal nome della funzione o dai dati non decorati. Il simbolo tra PUBLIC e il punto e virgola è il nome decorato.  
  
-   #### <a name="to-use-dumpbin-to-view-decorated-names"></a>Per usare DUMPBIN per la visualizzazione dei nomi decorati  
  
    1.  Per visualizzare i simboli esportati in un file con estensione obj o LIB, immettere `dumpbin /symbols` `objfile` a un prompt dei comandi per sviluppatori.  
  
    2.  Per trovare il formato decorato di un simbolo, cercare il nome non decorato tra parentesi. Il nome decorato è sulla stessa riga, una pipe (&#124;) dopo il carattere e prima del nome non decorato.  
  
##  <a name="Undecorated"></a>Nomi di visualizzazione non decorato  
 È possibile usare undname.exe per convertire un nome decorato nel formato non decorato. In questo esempio viene illustrato come funziona:  
  
```  
C:\>undname ?func1@a@@AAEXH@Z  
Microsoft (R) C++ Name Undecorator  
Copyright (C) Microsoft Corporation. All rights reserved.  
  
Undecoration of :- "?func1@a@@AAEXH@Z"  
is :- "private: void __thiscall a::func1(int)"  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Strumenti di compilazione di C/C++](../../build/reference/c-cpp-build-tools.md)   
 [Uso di extern per specificare un collegamento](../../cpp/using-extern-to-specify-linkage.md)