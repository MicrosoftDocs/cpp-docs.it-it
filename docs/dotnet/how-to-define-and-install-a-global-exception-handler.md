---
description: 'Altre informazioni su: procedura: definire e installare un gestore di eccezioni globale'
title: 'Procedura: definire e installare un gestore eccezioni globale'
ms.date: 11/04/2016
helpviewer_keywords:
- handlers, global
ms.assetid: dd88a812-3bc7-4ce8-8283-4b674c246534
ms.openlocfilehash: 6747e0bdf95ae4d87ed667576852c282e05a7d6d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97258330"
---
# <a name="how-to-define-and-install-a-global-exception-handler"></a>Procedura: definire e installare un gestore eccezioni globale

Nell'esempio di codice riportato di seguito viene illustrato come è possibile acquisire le eccezioni non gestite. Il form di esempio contiene un pulsante che, quando premuto, esegue un riferimento null, causando la generazione di un'eccezione. Questa funzionalità rappresenta un normale errore del codice. L'eccezione risultante viene rilevata dal gestore di eccezioni a livello di applicazione installato dalla funzione Main.

Questa operazione viene eseguita associando un delegato all' <xref:System.Windows.Forms.Application.ThreadException> evento. In questo caso, le eccezioni successive vengono quindi inviate al `App::OnUnhandled` metodo.

## <a name="example"></a>Esempio

```cpp
// global_exception_handler.cpp
// compile with: /clr
#using <system.dll>
#using <system.drawing.dll>
#using <system.windows.forms.dll>

using namespace System;
using namespace System::Threading;
using namespace System::Drawing;
using namespace System::Windows::Forms;

ref class MyForm : public Form
{
   Button^ b;
public:
   MyForm( )
   {
      b = gcnew Button( );
      b->Text = "Do Null Access";
      b->Size = Drawing::Size(150, 30);
      b->Click += gcnew EventHandler(this, &MyForm::OnClick);
      Controls->Add(b);
   }
   void OnClick(Object^ sender, EventArgs^ args)
   {
      // do something illegal, like call through a null pointer...
      Object^ o = nullptr;
      o->ToString( );
   }
};

ref class App
{
public:
   static void OnUnhandled(Object^ sender, ThreadExceptionEventArgs^ e)
   {
      MessageBox::Show(e->Exception->Message, "Global Exeception");
      Application::ExitThread( );
   }
};

int main()
{
   Application::ThreadException += gcnew
      ThreadExceptionEventHandler(App::OnUnhandled);

   MyForm^ form = gcnew MyForm( );
   Application::Run(form);
}
```

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../extensions/exception-handling-cpp-component-extensions.md)
