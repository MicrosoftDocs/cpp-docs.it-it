---
title: "Overload dell&#39;operatore &lt;&lt; per classi personalizzate | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operatore <<, overload di classi personali"
  - "operator<<, overload di classi personali"
ms.assetid: ad1d2c49-d84e-48a8-9c09-121f28b10bf0
caps.latest.revision: 12
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Overload dell&#39;operatore &lt;&lt; per classi personalizzate
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I flussi di output utilizzano l'operatore di inserimento \(`<<`\) per i tipi standard.  È inoltre possibile eseguire l'overload dell'operatore di `<<` per classi personalizzate.  
  
## Esempio  
 Nell'esempio di funzione di `write` è illustrato l'utilizzo di una struttura di `Date`.  Una data è un candidato ideale per la classe c\+\+ in cui i membri dati \(mese, il giorno e l'anno\) sono nascosti dalla visualizzazione.  Un flusso di output è la destinazione logica per la visualizzazione deuna struttura di questo tipo.  Questo codice viene visualizzata una data utilizzando l'oggetto di `cout` :  
  
```  
Date dt( 1, 2, 92 );  
cout << dt;  
```  
  
 Per ottenere `cout` per accettare un oggetto di `Date` dopo l'operatore di inserimento, overload l'operatore di inserimento riconosca un oggetto di `ostream` a sinistra e `Date` a destra.  La funzione di overload degli operatori di `<<` deve essere dichiarata come friend di classe `Date` pertanto può accedere ai dati privati in un oggetto di `Date`.  
  
```  
// overload_date.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
class Date  
{  
    int mo, da, yr;  
public:  
    Date(int m, int d, int y)  
    {  
        mo = m; da = d; yr = y;  
    }  
    friend ostream& operator<<(ostream& os, const Date& dt);  
};  
  
ostream& operator<<(ostream& os, const Date& dt)  
{  
    os << dt.mo << '/' << dt.da << '/' << dt.yr;  
    return os;  
}  
  
int main()  
{  
    Date dt(5, 6, 92);  
    cout << dt;  
}  
```  
  
  **5\/6\/92**   
## Note  
 L'operatore di overload restituisce un riferimento all'oggetto originale di `ostream`, è possibile combinare gli inserimenti:  
  
```  
cout << "The date is" << dt << flush;  
```  
  
## Vedere anche  
 [Flussi di output](../standard-library/output-streams.md)