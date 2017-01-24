---
title: "Risoluzione dei problemi relativi alle eccezioni: System.FormatException | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "FormatException (classe)"
ms.assetid: b2a4f55e-da87-4915-a053-59eb1595993d
caps.latest.revision: 21
caps.handback.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.FormatException
Un'eccezione <xref:System.FormatException> viene generata da un metodo che analizza o formatta un tipo quando il formato di un argomento non soddisfa le specifiche dei parametri del metodo.  
  
## In questo articolo  
  
## Generazioni di eccezioni di formato  
  
### Formattazione  
 La *formattazione* è il processo di conversione di un'istanza di una classe, una struttura o un valore di enumerazione nella relativa rappresentazione di stringa, eseguito spesso in modo che la stringa risultante possa essere visualizzata dagli utenti o usata per salvare lo stato dell'oggetto.  
  
 Ad esempio, <xref:System.Int32.ToString%28System.String%29?displayProperty=fullName> accetta un parametro di stringa che identifica una *stringa di formato* standard o personalizzata e restituisce la rappresentazione di stringa del numero. Il metodo genera un'eccezione <xref:System.FormatException> se la stringa di formato non è valida o non è supportata.  
  
### Formattazione composita  
 La *formattazione composita* accetta un elenco di oggetti e una stringa di formato composto come input. Una stringa di formato composto è costituita da testo fisso alternato a segnaposto indicizzati, denominati elementi di formato, che corrispondono agli oggetti dell'elenco. L'operazione di formattazione produce una stringa risultato costituita dal testo fisso originale alternato alla rappresentazione di stringa degli oggetti dell'elenco.  
  
 <xref:System.String.Format%2A?displayProperty=fullName> e <xref:System.Console.WriteLine%2A?displayProperty=fullName> sono esempi di metodi che eseguono la formattazione composita. I metodi che usano la formattazione composita generano un'eccezione <xref:System.FormatException> se la stringa di formato non è valida oppure se l'indice di un elemento di formato è minore di zero oppure maggiore o uguale al numero di argomenti.  
  
### Analisi  
 L'*analisi* è il processo di conversione di una stringa che rappresenta un tipo di base di .NET Framework in tale tipo di base. Ad esempio, un'operazione di analisi viene usata per convertire una stringa in un numero a virgola mobile o in un valore di data e ora.  
  
 Ad esempio, <xref:System.Int32.Parse%28System.String%29?displayProperty=fullName> <xref:System.DateTime.Parse%2A> converte la rappresentazione della stringa di data e ora nell'equivalente <xref:System.DateTime> usando informazioni sul formato specifiche delle impostazioni cultura specificate nel parametro <xref:System.IformatProvider>. Se la stringa non è nel formato corretto, viene generata un'eccezione <xref:System.FormatException>.  
  
## Evitare le eccezioni FormatException  
 L'articolo di riferimento della classe <xref:System.FormatException> include le cause e le soluzioni comuni degli errori <xref:System.FormatException>.  
  
 Le sezioni di MSDN Library [Formattazione di tipi](../Topic/Formatting%20Types%20in%20the%20.NET%20Framework.md) e [Analisi di stringhe](../Topic/Parsing%20Strings%20in%20the%20.NET%20Framework.md) contengono informazioni sulla formattazione e l'analisi corrette dei tipi.  
  
 **Formattazione composita**  
  
 [Formattazione composita](../Topic/Composite%20Formatting.md)  
  
 **Tipi numerici**  
  
|||  
|-|-|  
|[Stringhe di formato numerico standard](../Topic/Standard%20Numeric%20Format%20Strings.md)|[Stringhe di formato numerico personalizzato](../Topic/Custom%20Numeric%20Format%20Strings.md)|  
|[Analisi di stringhe numeriche](../Topic/Parsing%20Numeric%20Strings%20in%20the%20.NET%20Framework.md)||  
  
 **Tipi data e ora e TimeSpan**  
  
|||  
|-|-|  
|[Stringhe di formato di data e ora standard](../Topic/Standard%20Date%20and%20Time%20Format%20Strings.md)|[Stringhe di formato di data e ora personalizzato](../Topic/Custom%20Date%20and%20Time%20Format%20Strings.md)|  
|[Stringhe di formato TimeSpan standard](../Topic/Standard%20TimeSpan%20Format%20Strings.md)|[Stringhe di formato TimeSpan personalizzate](../Topic/Custom%20TimeSpan%20Format%20Strings.md)|  
|[Analisi delle stringhe di data e ora](../Topic/Parsing%20Date%20and%20Time%20Strings%20in%20the%20.NET%20Framework.md)||  
  
 **Altri tipi**  
  
|||  
|-|-|  
|[Stringhe di formato di enumerazione](../Topic/Enumeration%20Format%20Strings.md)|[Analisi di altre stringhe](../Topic/Parsing%20Other%20Strings%20in%20the%20.NET%20Framework.md)|